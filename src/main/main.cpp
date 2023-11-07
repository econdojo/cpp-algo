// #include "../hash_table/hash_table.hpp"
// #include "../linked_list/linked_list.hpp"
// #include "../array/array.hpp"
// #include "../bit/bit.hpp"
// #include "../tree/tree.hpp"
// #include "../graph/graph.hpp"
#include "../queue/queue.hpp"

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