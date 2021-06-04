//
// Created by sunxu on 2020/12/7.
//

#ifndef EXERCISE_LINKEDBINARYTREE_H
#define EXERCISE_LINKEDBINARYTREE_H

// linked binary tree using nodes of type binaryTreeNode
// derives from the abstract class binaryTree

#include <iostream>
#include "binaryTree.h"
#include "arrayQueue.h"
#include "binaryTreeNode.h"
#include "myExceptions.h"
#include "booster.h"
using namespace std;

template<class E>
class linkedBinaryTree : public binaryTree<binaryTreeNode<E>>
{
public:
    linkedBinaryTree() {root = NULL; treeSize = 0;} //构造函数
    ~linkedBinaryTree(){erase();} //析构函数
    bool empty() const {return treeSize == 0;}  //判断二叉树是否为空
    int size() const {return treeSize;}  //返回树的节点个数
    E* rootElement() const;
    void makeTree(const E& element, linkedBinaryTree<E>&, linkedBinaryTree<E>&);
    linkedBinaryTree<E>& removeLeftSubtree();
    linkedBinaryTree<E>& removeRightSubtree();
    void preOrder(void(*theVisit)(binaryTreeNode<E>*)) //这里公有的成员函数preOrder，先对私有的数据成员visit赋值，
    {visit = theVisit; preOrder(root);}                //在函数的内部调用私有的递归函数preOrder
    void inOrder(void(*theVisit)(binaryTreeNode<E>*))  //这四个函数起到了遍历的作用，
    {visit = theVisit; inOrder(root);}
    void postOrder(void(*theVisit)(binaryTreeNode<E>*))
    {visit = theVisit; postOrder(root);}
    void levelOrder(void(*)(binaryTreeNode<E> *)); //层次遍历，采用队列而非递归
    void preOrderOutput() {preOrder(output); cout << endl;}  //这四个函数起到了遍历输出的作用
    void inOrderOutput() {inOrder(output); cout << endl;}
    void postOrderOutput() {postOrder(output); cout << endl;}
    void levelOrderOutput() {levelOrder(output); cout << endl;}
    void erase()             //删除函数
    {
        postOrder(dispose);  //形参是dispose函数，所以调用的是公有成员函数
        root = NULL;
        treeSize = 0;
    }
    int height() const {return height(root);} //函数内部重载私有函数
    E* search(E element){return search(element, root);}
    linkedBinaryTree<E>& operator=(const linkedBinaryTree<E>& rightHand)
    {
        erase();
        root = copy(rightHand.root);
        treeSize = rightHand.treeSize;
        return *this;
    }
protected:
    binaryTreeNode<E> *root;                // pointer to root
    int treeSize;                           // number of nodes in tree
    static void (*visit)(binaryTreeNode<E>*);// visit function,函数指针，指针visit指向函数，
                                            // 这个所指向的函数返回值为void，形参为binaryTreeNode<E>*；
    static int count;                       // used to count nodes in a subtree
    static void preOrder(binaryTreeNode<E> *t);
    static void inOrder(binaryTreeNode<E> *t);
    static void postOrder(binaryTreeNode<E> *t);
    static void countNodes(binaryTreeNode<E> *t)
    {
        visit = addToCount;
        count = 0;
        preOrder(t);
    }
    static void dispose(binaryTreeNode<E> *t) {delete t;}
    static void output(binaryTreeNode<E> *t)
    {cout << t->element << ' ';}
    static void addToCount(binaryTreeNode<E> *t)
    {count++;}
    static int height(binaryTreeNode<E> *t);
    E* search(E element, binaryTreeNode<E> *t);
    binaryTreeNode<E>* copy(binaryTreeNode<E> *t);
};

//下面两句是给静态变量visit和count分配内存，如果删除这两句话，在链接的时候会提示没有找到符号，即编译器没有给他们分配内存；
//给一般类的静态变量分配内存的语句不能出现在头文件和类的构造函数中，因为会多次调用，导致多次分配内存错误；
//但是现在的类是一个模板类，只有根据这个模板产生一个类时才会用到，所以可以写在头文件中
template <class E> void(*linkedBinaryTree<E>::visit)(binaryTreeNode<E>*);
template <class E> int linkedBinaryTree<E>::count;
// the following should work but gives an internal compiler error
// template <class E> void (*linkedBinaryTree<E>::visit)(binaryTreeNode<E>*);
// so the explicit declarations that follow are used for our purpose instead
//template<> void (*linkedBinaryTree<int>::visit)(binaryTreeNode<int>*);
//template<> void (*linkedBinaryTree<booster>::visit)(binaryTreeNode<booster>*);
//template<> void (*linkedBinaryTree<pair<int,int> >::visit)(binaryTreeNode<pair<int,int> >*);
//template<> void (*linkedBinaryTree<pair<const int,char> >::visit)(binaryTreeNode<pair<const int,char> >*);
//template<> void (*linkedBinaryTree<pair<const int,int> >::visit)(binaryTreeNode<pair<const int,int> >*);

template<class E>
E* linkedBinaryTree<E>::rootElement() const  //返回指向root中element的指针
{// Return NULL if no root. Otherwise, return pointer to root element.
    if (treeSize == 0)
        return NULL;  // no root
    else
        return &root->element;  //取地址返回
}

template<class E>
void linkedBinaryTree<E>::makeTree(const E& element,
                                   linkedBinaryTree<E>& left, linkedBinaryTree<E>& right)
{// Combine left, right, and element to make new tree.
    // left, right, and this must be different trees.
    // create combined tree
    root = new binaryTreeNode<E> (element, left.root, right.root);
    treeSize = left.treeSize + right.treeSize + 1;

    // deny access from trees left and right
    left.root = right.root = NULL;  //一旦成为子树则不存在根，一个二叉树之中只存在一个根
    left.treeSize = right.treeSize = 0;  //一旦成为子树则不存在节点数
}

template<class E>
linkedBinaryTree<E>& linkedBinaryTree<E>::removeLeftSubtree()
{// Remove and return the left subtree.
    // check if empty
    if (treeSize == 0)
        throw emptyTree();

    // detach left subtree and save in leftSubtree
    linkedBinaryTree<E> leftSubtree;
    leftSubtree.root = root->leftChild;
    count = 0;
    //leftSubtree.treeSize = countNodes(leftSubtree.root);  //注释掉这句话换成下面两句
    countNodes(leftSubtree.root);
    leftSubtree.treeSize = count;

    root->leftChild = NULL;
    treeSize -= leftSubtree.treeSize;

    return leftSubtree;
}

template<class E>
linkedBinaryTree<E>& linkedBinaryTree<E>::removeRightSubtree()
{// Remove and return the right subtree.
    // check if empty
    if (treeSize == 0)
        throw emptyTree();

    // detach right subtree and save in rightSubtree
    linkedBinaryTree<E> rightSubtree;
    rightSubtree.root = root->rightChild;
    count = 0;
    //rightSubtree.treeSize = countNodes(rightSubtree.root);  //注释掉这句话换成下面两句
    countNodes(rightSubtree.root);
    rightSubtree.treeSize=count;

    root->rightChild = NULL;
    treeSize -= rightSubtree.treeSize;

    return rightSubtree;
}

template<class E>
void linkedBinaryTree<E>::preOrder(binaryTreeNode<E> *t)
{// Preorder traversal.
    if (t != NULL)
    {
        linkedBinaryTree<E>::visit(t);
        preOrder(t->leftChild);
        preOrder(t->rightChild);
    }
}

template<class E>
void linkedBinaryTree<E>::inOrder(binaryTreeNode<E> *t)
{// Inorder traversal.
    if (t != NULL)
    {
        inOrder(t->leftChild);
        linkedBinaryTree<E>::visit(t);
        inOrder(t->rightChild);
    }
}

template<class E>
void linkedBinaryTree<E>::postOrder(binaryTreeNode<E> *t)
{// Postorder traversal.
    if (t != NULL)
    {
        postOrder(t->leftChild);
        postOrder(t->rightChild);
        linkedBinaryTree<E>::visit(t);
    }
}

template <class E>
void linkedBinaryTree<E>::levelOrder(void(*theVisit)(binaryTreeNode<E> *))
{// Level-order traversal.
    arrayQueue<binaryTreeNode<E>*> q;
    binaryTreeNode<E> *t = root;
    while (t != NULL)
    {
        theVisit(t);  // visit t

        // put t's children on queue
        if (t->leftChild != NULL)
            q.push(t->leftChild);
        if (t->rightChild != NULL)
            q.push(t->rightChild);

        // get next node to visit
        try {t = q.front();}
        catch (queueEmpty) {return;}
        q.pop();
    }
}

template <class E>
int linkedBinaryTree<E>::height(binaryTreeNode<E> *t)
{// Return height of tree rooted at *t.
    if (t == NULL)
        return 0;                    // empty tree
    int hl = height(t->leftChild);  // height of left
    int hr = height(t->rightChild); // height of right
    if (hl > hr)
        return ++hl;
    else
        return ++hr;
}

template<class E>
binaryTreeNode<E>* linkedBinaryTree<E>::copy(binaryTreeNode<E> *t)
{
    if(!t)
        return NULL;
    binaryTreeNode<E> *left, *right;
    left = copy(t->leftChild);
    right =copy(t->rightChild);
    return new binaryTreeNode<E>(t->element, left, right);
}

template<class E>
E* linkedBinaryTree<E>::search(E element, binaryTreeNode<E> *t)
{
    if(!t)
        return NULL;
    if(t->element==element)
        return  &t->element;
    E* p;
    p = search(element, t->leftChild);
    if(p)
        return p;
    return search(element, t->rightChild);
}
#endif //EXERCISE_LINKEDBINARYTREE_H
