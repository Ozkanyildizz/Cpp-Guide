#include <iostream>
using namespace std;

#if 0
int main() {
    // Declare an array of size 5
    int numbers[5] = { 10, 20, 30, 40, 50 };

    // Print array elements using index
    cout << "Array elements (using index):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    cout << endl;

    // Modify an element
    numbers[2] = 99; // change 30 → 99
    cout << "After modification, numbers[2] = " << numbers[2] << endl << endl;

    // Calculate sum of elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    cout << "Sum of array elements = " << sum << endl;

    return 0;
}
#endif 