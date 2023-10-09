#include <iostream>
#include "../basic/basic.h"

using namespace std;

int basic(void) {
    //Num n(5);
    //cout << n.getNum() << endl;
    cout << coin_change(850) << endl;
    int array[8] = {6, 2, 5, 1, 7, 4, 8, 3};
    cout << subsequence(array, 8) << endl;
    return 0;
}