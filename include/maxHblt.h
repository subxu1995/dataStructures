//
// Created by sunxu on 2020/12/12.
//

#ifndef EXERCISE_MAXHBLT_H
#define EXERCISE_MAXHBLT_H
// height biased leftist tree implementation of a max priority queue
// derives from the ADT maxPriorityQueue
// also derives from linkedBinaryTree<pair<int,T> >
// first component of a pair is the s value and the second is the data


#include "maxPriorityQueue.h"
#include "linkedBinaryTree.h"
#include "binaryTreeNode.h"
#include "myExceptions.h"
#include <sstream>

using namespace std;

template<class T>
class maxHblt : public maxPriorityQueue<T>,
                public linkedBinaryTree<pair<int,T> >
{
public:
    bool empty() const {return this->treeSize == 0;}
    int size() const {return this->treeSize;}
    const T& top()  // const T&对常量的引用，不能修改返回值
    {// return max element
        if (this->treeSize == 0)
            throw queueEmpty();
        return this->root->element.second;
    }
    void pop();
    void push(const T&);
    void initialize(T *, int);
    void meld(maxHblt<T>& theHblt)
    {// meld *this and theHblt
        meld(this->root, theHblt.root);
        this->treeSize += theHblt.treeSize;
        theHblt.root = NULL;
        theHblt.treeSize = 0;
    }
    void output() {this->postOrder(hbltOutput); cout << endl;}
private:
    void meld(binaryTreeNode<pair<int,T> >* &,
              binaryTreeNode<pair<int,T> >* &);
    static void hbltOutput(binaryTreeNode<pair<int,T> > *t)
    {cout << t->element.second << ' ';}
};

template<class T>
    void maxHblt<T>::meld(binaryTreeNode<pair<int, T> >* &x,
                          binaryTreeNode<pair<int, T> >* &y)
    //这里的函数形参采用了指针引用的方式，函数体内改变x和y所指向的值时，则x和y的值确实也跟着改变；
    //若不采用指针引用则函数体内对实参的改变不影响实参，逻辑上不通
    {// Meld leftist trees with roots *x and *y.
        // Return pointer to new root in x.
        if (y == NULL)   // y is empty
            return;
        if (x == NULL)   // x is empty
        {x = y; return;}

        // neither is empty, swap x and y if necessary
        if (x->element.second < y->element.second)
            swap(x, y);

        // now x->element.second >= y->element.second

        meld(x->rightChild,y);

        // swap subtrees of x if necessary and set x->element.first
        if (x->leftChild == NULL)
        {// left subtree empty, swap the subtrees
            x->leftChild = x->rightChild;
            x->rightChild = NULL;
            x->element.first = 1;
        }
        else
        {   // swap only if left subtree has smaller s value
            if (x->leftChild->element.first < x->rightChild->element.first)
            swap(x->leftChild, x->rightChild);
            // update s value of x
            x->element.first = x->rightChild->element.first + 1;
        }
}

template<class T>
void maxHblt<T>::push(const T& theElement)
{// Insert theElement into the leftist tree.
    // Create tree with one node.
    binaryTreeNode<pair<int,T> > *q =
            new binaryTreeNode<pair<int,T> > (pair<int,T>(1, theElement));

    // meld q and original tree
    meld(this->root,q);
    this->treeSize++;
}

template<class T>
void maxHblt<T>::pop()
{// Delete max element.
    if (this->root == NULL)
        throw queueEmpty();

    // tree not empty
    binaryTreeNode<pair<int,T> > *left = this->root->leftChild,
            *right = this->root->rightChild;
    delete this->root;
    this->root = left;
    meld(this->root, right);
    this->treeSize--;
}

template<class T>
void maxHblt<T>::initialize(T* theElements, int theSize)
{// Initialize hblt with theElements[1:theSize].
    arrayQueue<binaryTreeNode<pair<int,T> >*> q(theSize);
    this->erase();  // make *this empty
    // 注意点：在使用模板继承的时候，如子类中有调用父类的成员函数和变量的情况，则需要用this来调用，或者使用using声明，否则会导致
    // 在g++上无法编译通过
    // initialize queue of trees
    for (int i = 1; i <= theSize; i++)
        // create trees with one node each
        q.push(new binaryTreeNode<pair<int,T> >
                       (pair<int,T>(1, theElements[i])));

    // repeatedly meld from queue
    for (int i = 1; i <= theSize - 1; i++)
    {// pop and meld two trees from queue
        binaryTreeNode<pair<int,T> > *b = q.front();
        q.pop();
        binaryTreeNode<pair<int,T> > *c = q.front();
        q.pop();
        meld(b,c);
        // put melded tree on queue
        q.push(b);
    }

    if (theSize > 0)
        this->root = q.front();
    this->treeSize = theSize;
}

#endif //EXERCISE_MAXHBLT_H
