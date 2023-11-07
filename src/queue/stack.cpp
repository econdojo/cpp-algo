#include "queue.hpp"

/*
Implement a last-in-first-out (LIFO) stack using queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).

int main(int argc, char **argv) {
    Stack* myStack = new Stack();
    myStack->push1(1);
    myStack->push2(2);
    cout << myStack->top() << endl;
    cout << myStack->pop() << endl;
    cout << myStack->empty() << endl;
    delete myStack;
    return 0;
}
*/

int Stack::pop() {
    if(q1.empty()) return -1;
    int x = q1.front();
    q1.pop();
    return x;
}

int Stack::top() {
    if(q1.empty()) return -1;
    return q1.front();
}

bool Stack::empty() {
    return q1.empty();
}

// Method 1: one queue, time O(n), space O(1)

void Stack::push1(int x) {
    q1.push(x);
    for(int i=0; i<q1.size()-1; i++){
        int x = q1.front();
        q1.pop();
        q1.push(x);
    }
}

// Method 2: two queues, time O(n), space O(1)

void Stack::push2(int x) {
    q2.push(x);
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1,q2);
}