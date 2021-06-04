//
// Created by sunxu on 2020/12/7.
//

#ifndef EXERCISE_QUEUE_H
#define EXERCISE_QUEUE_H
using namespace std;

template<class T>
class queue
{
public:
    virtual ~queue() {}
    virtual bool empty() const = 0;
    // return true iff queue is empty
    virtual int size() const = 0;
    // return number of elements in queue
    virtual T& front() = 0;
    // return reference to the front element
    virtual T& back() = 0;
    // return reference to the back element
    virtual void pop() = 0;
    // remove the front element
    virtual void push(const T& theElement) = 0;
    // add theElement at the back of the queue
};
#endif //EXERCISE_QUEUE_H
