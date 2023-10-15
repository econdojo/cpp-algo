// Bit representation of int
#include "basic.hpp"

void int_bit(int x) {
    for (int i = 31; i >= 0; i--) {
        if (x & (1 << i))
            cout << "1";
        else
            cout << "0";
    }
}