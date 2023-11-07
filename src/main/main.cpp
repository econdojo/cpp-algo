// #include "../hash_table/hash_table.hpp"
// #include "../linked_list/linked_list.hpp"
// #include "../array/array.hpp"
// #include "../bit/bit.hpp"
// #include "../tree/tree.hpp"
// #include "../graph/graph.hpp"
// #include "../queue/queue.hpp"
#include "../stack/stack.hpp"

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