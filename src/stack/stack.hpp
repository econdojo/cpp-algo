#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stack>
using namespace std;

class Queue {
    private:
        stack<int> s, t;
    public:
        Queue() {}
        
        void push(int x); // push element x to the back of the queue

        int pop(); // remove the element from the front of the queue and return it
        
        int peek(); // return the element at the front of the queue
        
        bool empty(); // return true if the queue is empty, false otherwise
};

#endif