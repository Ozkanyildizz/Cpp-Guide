#include <iostream>
using namespace std;

// Function that takes parameter by value
void increaseByValue(int number) {
    number += 10; // This only changes the local copy
    cout << "[increaseByValue] Inside function, number = " << number << endl;
}

// Function that takes parameter by reference
void increaseByReference(int& number) {
    number += 10; // This changes the original variable
    cout << "[increaseByReference] Inside function, number = " << number << endl;
}
#if 0
int main() {
    int a = 5;
    int b = 5;

    cout << "Initial value of a: " << a << endl;
    increaseByValue(a); // a is not affected
    cout << "After calling increaseByValue, a = " << a << endl << endl;

    cout << "Initial value of b: " << b << endl;
    increaseByReference(b); // b is modified
    cout << "After calling increaseByReference, b = " << b << endl;

    return 0;
}
#endif
