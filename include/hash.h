//
// Created by sunxu on 2020/12/17.
//

#ifndef DATASTRUCTURES_HASH_H
#define DATASTRUCTURES_HASH_H
// functions to convert from type K to nonnegative integer
// derived from similar classes in SGI STL

#include <iostream>
#include <string>

template <class K>
class hash              //hash类模板
{
public:
    size_t operator()(const K theKey)const
    {
        return size_t(theKey);
    }
};

template<>
class hash<std::string>//模板特例化，特化为string类型
{
public:
    size_t operator()(const std::string theKey) const
    {// Convert theKey to a nonnegative integer.
        unsigned long hashValue = 0;
        int length = (int) theKey.length();
        for (int i = 0; i < length; i++)
            hashValue = 5 * hashValue + theKey.at(i);

        return size_t(hashValue);
    }
};

template<>
class hash<int>//模板特例化，特化为int类型
{
public:
    size_t operator()(const int theKey) const
    {return size_t(theKey);}
};

template<>
class hash<long>//模板特例化，特化为long类型
{
public:
    size_t operator()(const long theKey) const
    {return size_t(theKey);}
};

#endif //DATASTRUCTURES_HASH_H
