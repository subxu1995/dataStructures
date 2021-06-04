//
// Created by sunxu on 2020/12/7.
//

#ifndef EXERCISE_BOOSTER_H
#define EXERCISE_BOOSTER_H


#include <iostream>

using namespace std;

struct booster
{
    int degradeToLeaf,           // degradation to leaf
            degradeFromParent;       // degradation from parent
    bool boosterHere;            // true iff booster here

    void output(ostream& out) const
    {out << boosterHere << ' ' << degradeToLeaf << ' '
         << degradeFromParent << ' ';}
};

// overload <<
ostream& operator<<(ostream& out, booster x)
{x.output(out); return out;}

#endif //EXERCISE_BOOSTER_H
