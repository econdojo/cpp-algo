#include "array.hpp"

void arrayStruct() {
    array_t *arr = new array_t(3);
    for(int i = 0; i < arr->size; i++) {
        arr->array_set(i, i);
    }
    for(int i = 0; i < arr->size; i++) {
        cout << arr->array_get(i) << " ";
    }
    delete arr;
}