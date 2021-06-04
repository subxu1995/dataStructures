//
// Created by sunxu on 2020/12/17.
//

#ifndef DATASTRUCTURES_SKIPNODE_H
#define DATASTRUCTURES_SKIPNODE_H
// node type used in skip lists
// node with a next and element field; element is a pair<const K, E>
// next is a 1D array of pointers

template <class K, class E>
struct skipNode
{
    typedef std::pair<const K, E> pairType;
    pairType element;
    skipNode<K,E> **next;   // 1D array of pointers

    skipNode(const pairType& thePair, int size)
            :element(thePair){next = new skipNode<K,E>* [size];}
};

#endif //DATASTRUCTURES_SKIPNODE_H
