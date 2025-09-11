#include <iostream>
using namespace std;

/*
    Program: Debugging Examples
    Author: Özkan
    Date: 2025-09-11
    Description: This program demonstrates common debugging techniques.
                 Shows examples of logical errors, runtime errors, and boundary checks.
*/

// Function with a potential logical error
int divideNumbers(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // prevent crash
    }
    return a / b;
}

// Function to calculate sum of an array
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i <= size; i++) { // Intentional bug: should be i < size
        sum += arr[i];
    }
    return sum;
}

#if 0
int main() {
    // Example 1: Division by zero
    int x = 10, y = 0;
    cout << "Dividing " << x << " by " << y << ": ";
    int result = divideNumbers(x, y);
    cout << result << endl;

    // Example 2: Array sum with boundary check
    int numbers[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Calculating sum of array: ";
    result = sumArray(numbers, size); // This will show a bug
    cout << result << endl;

    // Corrected version
    int correctSum = 0;
    for (int i = 0; i < size; i++) { // correct loop condition
        correctSum += numbers[i];
    }
    cout << "Correct sum: " << correctSum << endl;

    return 0;
}
#endif