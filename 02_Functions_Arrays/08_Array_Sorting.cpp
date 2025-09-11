#include <iostream>
using namespace std;

int main() {
    // Declare a 1D array of integers
    int numbers[6] = { 42, 23, 17, 13, 57, 8 };

    // Print original array
    cout << "Original array:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    // Sort the array in ascending order using simple bubble sort
    for (int i = 0; i < 6 - 1; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap elements
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    cout << "Array after sorting in ascending order:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    // Optional: sum of array elements
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += numbers[i];
    }
    cout << "Sum of all array elements = " << sum << endl;

    return 0;
}
 