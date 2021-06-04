//
// Created by sunxu on 2020/12/15.
//

#ifndef EXERCISE_WINNERTREE_H
#define EXERCISE_WINNERTREE_H
// abstract class winner tree
// all methods are pure virtual functions

using namespace std;

template<class T>
class winnerTree
{
public:
    virtual ~winnerTree() {}
    virtual void initialize(T *thePlayer, int theNumberOfPlayers) = 0;
    // create winner tree with thePlayer[1:numberOfPlayers]
    virtual int winner() const = 0;
    // return index of winner
    virtual void rePlay(int thePLayer) = 0;
    // replay matches following a change in thePLayer
};

#endif //EXERCISE_WINNERTREE_H
