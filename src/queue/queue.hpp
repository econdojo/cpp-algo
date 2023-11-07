#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <queue>
using namespace std;

class Stack {
    private:
        queue<int> q1, q2; // q1 is the main queue
    public:
        Stack() {}
        
        void push1(int x); // push element x to the top of the stack
        void push2(int x);

        int pop(); // remove the element on the top of the stack and return it
        
        int top(); // return the element on the top of the stack
        
        bool empty(); // return true if the stack is empty, false otherwise
};

#endif