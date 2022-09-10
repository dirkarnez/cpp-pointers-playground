#include <iostream>

int main() {
    // read-only address (variable)
    // can change data, but cannot change address
    int* const ptr_a = nullptr;
    *ptr_a = 123;
    // ptr_a = nullptr; FAILED

    
    // read-only data
    // can change address, but cannot change data
    const int* ptr_b = nullptr;
    // *ptr_b = 123; FAILED
    int value = 123;
    ptr_b = &value;
    return 0;
}
