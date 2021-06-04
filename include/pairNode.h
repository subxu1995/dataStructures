//
// Created by sunxu on 2020/12/22.
//

#ifndef DATASTRUCTURES_PAIRNODE_H
#define DATASTRUCTURES_PAIRNODE_H

// node with a next and element field; element is a pair<const K,E>

template <class K, class E>
struct pairNode
{
    typedef std::pair<const K, E> pairType;
    pairType element;
    pairNode<K,E> *next;

    pairNode(const pairType& thePair):element(thePair){}
    pairNode(const pairType& thePair, pairNode<K,E>* theNext)
            :element(thePair){next = theNext;}
};

#endif //DATASTRUCTURES_PAIRNODE_H
