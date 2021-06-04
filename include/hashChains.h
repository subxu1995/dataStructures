//
// Created by sunxu on 2020/12/22.
//

#ifndef DATASTRUCTURES_HASHCHAINS_H
#define DATASTRUCTURES_HASHCHAINS_H
// hash table using sorted chains and division
// implements all dictionary methods

#include <iostream>
//#include "hash.h"  // mapping functions from K to nonnegative integer
#include "dictionary.h"
#include "sortedChain.h"
#include<hash.h>
template<class K, class E>
class hashChains : public dictionary<K,E>
{
public:
    hashChains(int theDivisor = 11)
    {
        divisor = theDivisor;
        dSize = 0;

        // allocate and initialize hash table array
        table = new sortedChain<K,E> [divisor];
    }

    ~hashChains(){delete [] table;}

    bool empty() const {return dSize == 0;}
    int size() const {return dSize;}

    std::pair<const K, E>* find(const K& theKey) const
    {return table[hash1(theKey) % divisor].find(theKey);}

    void insert(const std::pair<const K, E>& thePair)
    {
        int homeBucket = (int) hash1(thePair.first) % divisor;
        int homeSize = table[homeBucket].size();
        table[homeBucket].insert(thePair);
        if (table[homeBucket].size() > homeSize)
            dSize++;
    }

    void erase(const K& theKey)
    {table[hash1(theKey) % divisor].erase(theKey);}

    void output(std::ostream& out) const
    {
        for (int i = 0; i < divisor; i++)
            if (table[i].size() == 0)
                std::cout << "NULL" << std::endl;
            else
                std::cout << table[i] << std::endl;
    }


protected:
    sortedChain<K, E>* table;  // hash table
    hash<K> hash1;              // maps type K to nonnegative integer
    int dSize;                 // number of elements in list
    int divisor;               // hash function divisor
};


// overload <<
template <class K, class E>
std::ostream& operator<<(std::ostream& out, const hashChains<K,E>& x)
{x.output(out); return out;}

#endif //DATASTRUCTURES_HASHCHAINS_H
