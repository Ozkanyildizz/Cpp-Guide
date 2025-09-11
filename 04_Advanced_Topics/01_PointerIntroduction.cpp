#include <iostream>
using namespace std;

#if 0
int main() {
    int num = 42;      // Declare an integer variable
    int* ptr = &num;   // Declare a pointer to integer and store the address of num

    // Print the value and address
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl << endl;

    // Modify value using pointer
    *ptr = 100;
    cout << "After modifying via pointer:" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}
#endif