#include <iostream>
using namespace std;

#if 0
int main() {
    int num = 50;      // Declare an integer variable
    int& ref = num;    // Declare a reference to num

    // Print original value and reference
    cout << "Original value of num: " << num << endl;
    cout << "Value via reference ref: " << ref << endl << endl;

    // Modify value using reference
    ref = 100;
    cout << "After modifying via reference:" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Value via reference ref: " << ref << endl << endl;

    // References and pointers comparison
    int* ptr = &num; // pointer to num
    *ptr = 200;
    cout << "After modifying via pointer:" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Value via reference ref: " << ref << endl;

    return 0;
}
#endif