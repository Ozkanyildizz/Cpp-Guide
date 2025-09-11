#include <iostream>
using namespace std;

#if 0
int main() {
    // Declare a 2D array (3 rows, 3 columns)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the matrix
    cout << "Matrix elements:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Modify an element
    matrix[1][1] = 99; // change element in 2nd row, 2nd column
    cout << "After modification, matrix[1][1] = " << matrix[1][1] << endl << endl;

    // Calculate sum of all elements
    int sum = 0;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            sum += matrix[row][col];
        }
    }
    cout << "Sum of all matrix elements = " << sum << endl;

    return 0;
}
#endif