// #include "../hash_table/hash_table.hpp"
// #include "../linked_list/linked_list.hpp"
// #include "../dynamic_programming/dynamic_programming.hpp"
#include "../bit/bit.hpp"

int main(int argc, char **argv) {
    int dividend = 0b1010; // 10
    int divisor = 0b11; // 3
    int quotient = divide1(dividend, divisor); // 3
    cout << bitset<9>(quotient) << endl;
    return 0;
}