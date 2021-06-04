//
// Created by sunxu on 2020/12/7.
//

#ifndef EXERCISE_BINARYTREE_H
#define EXERCISE_BINARYTREE_H
#include <functional>

using namespace std;

template<class T>
class binaryTree
{
public:
    virtual ~binaryTree() {}
    virtual bool empty() const = 0;
    virtual int size() const = 0;
    virtual void preOrder(void (*) (T *)) = 0;  //函数指针，指向的是返回值为void，形参是T*类型的函数
    // parameter is a pointer to a function whose return
    // type is void and has a single argument of type T*
    virtual void inOrder(void (*) (T *)) = 0;
    virtual void postOrder(void (*) (T *)) = 0;
    virtual void levelOrder(void (*) (T *)) = 0;
};
#endif //EXERCISE_BINARYTREE_H
