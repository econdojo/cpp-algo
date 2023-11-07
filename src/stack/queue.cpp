#include "stack.hpp"

/*
Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

int main(int argc, char **argv) {
    Queue* myQueue = new Queue();
    myQueue->push(1);
    myQueue->push(2);
    cout << myQueue->peek() << endl;
    cout << myQueue->pop() << endl;
    cout << myQueue->empty() << endl;
    delete myQueue;
    return 0;
}
*/

void Queue::push(int x) {
    s.push(x);
}

int Queue::pop() {
    while(!s.empty()){
        int d = s.top();
        t.push(d);
        s.pop();
    }
    int r = t.top();
    t.pop();
    while(!t.empty()){
        int d = t.top();
        s.push(d);
        t.pop();
    }
    return r;
}

int Queue::peek() {
    while(!s.empty()){
        int d = s.top();
        t.push(d);
        s.pop();
    }
    int r = t.top();
    while(!t.empty()){
        int d = t.top();
        s.push(d);
        t.pop();
    }
    return r;
}

bool Queue::empty() {
    return s.size() == 0;
}