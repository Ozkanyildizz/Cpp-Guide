#include <iostream>
using namespace std;

#if 0
int main() {
    // Dynamic allocation of a single integer
    int* ptr = new int; // allocate memory on heap
    *ptr = 42;

    cout << "Value stored in dynamic memory: " << *ptr << endl;
    cout << "Address of dynamic memory: " << ptr << endl;

    delete ptr; // free the allocated memory
    ptr = nullptr; // good practice to avoid dangling pointer

    cout << endl;

    // Dynamic allocation of an array
    int* arr = new int[5]; // allocate memory for 5 integers
    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10; // assign values
    }

    cout << "Values in dynamic array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // free array memory
    arr = nullptr;

    return 0;
}
#endif
