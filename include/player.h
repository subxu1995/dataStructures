//
// Created by sunxu on 2020/12/15.
//

#ifndef EXERCISE_PLAYER_H
#define EXERCISE_PLAYER_H
// node type used by winner tree

struct player
{
    int id, key;

    operator int () const {return key;}
};

#endif //EXERCISE_PLAYER_H
