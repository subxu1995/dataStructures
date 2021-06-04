//
// Created by sunxu on 2020/12/16.
//

#ifndef EXERCISE_BSTREE_H
#define EXERCISE_BSTREE_H
// abstract class bsTree
// abstract data type specification for binary search trees
// all methods are pure virtual functions
// K is key type and E is value type


#include "dictionary.h"

using namespace std;

template<class K, class E>
class bsTree : public dictionary<K,E>
{
public:
    virtual void ascend() = 0;
    // output in ascending order of key
};
#endif //EXERCISE_BSTREE_H
