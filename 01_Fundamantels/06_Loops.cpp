#include <iostream> // Required library for input/output operations
using namespace std;

int main() {
    // 1. for loop
    cout << "Numbers from 1 to 5 using for loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2. while loop
    cout << "\nNumbers from 1 to 5 using while loop:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // 3. do-while loop
    cout << "\nNumbers from 1 to 5 using do-while loop:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    // 4. Ending loop early with break
    cout << "\nEnding loop early using break:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // Exit the loop when i equals 6
        }
        cout << i << " ";
    }
    cout << endl;

    // 5. Skipping an iteration using continue
    cout << "\nSkipping some iterations using continue (only even numbers):" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue; // Skip this iteration if i is odd
        }
        cout << i << " ";
    }
    cout << endl;

    // 6. Nested loops
    cout << "\nMultiplication table using nested loops (1-3):" << endl;
    for (int x = 1; x <= 3; x++) {
        for (int y = 1; y <= 3; y++) {
            cout << x << " x " << y << " = " << x * y << "\t";
        }
        cout << endl;
    }

    // 7. Infinite loop example (use carefully)
    // for (;;) { /* Infinite loop */ }
    // while (true) { /* Infinite loop */ }

    return 0; // Returns 0 when the program ends successfully
}
