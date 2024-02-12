#include "array.hpp"

/*
Reference: https://www.youtube.com/watch?v=cR2QFQbssa0&list=PLvsr8Nz5WefPfhrmbVPvx58tLXkgAhKiG&index=59

int main(int argc, char **argv) {
    array_t *arr = new array_t(3);
    arrayStruct(arr);
    return 0;
}
*/

void arrayStruct(array_t *arr) {
    for(int i = 0; i < arr->size; i++) {
        arr->array_set(i, i);
    }
    for(int i = 0; i < arr->size; i++) {
        cout << arr->array_get(i) << " ";
    }
    delete arr;
}