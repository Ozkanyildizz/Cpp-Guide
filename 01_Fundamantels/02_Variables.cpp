#include <iostream> // Required library for input/output operations
using namespace std;

int main() {
    // Variables of the same type can be declared side by side
    int a, b;
    // They can also be declared separately
    int result;

    // Assigning values to variables
    a = 5;    // Assigns the value 5 to variable 'a'
    b = 4;    // Assigns the value 4 to variable 'b'
    a = a + 1; // Increases the value of 'a' by 1 (a is now 6)
    result = a + b; // Assigns the sum of 'a' and 'b' to variable 'result'

    // Printing the result to the screen
    cout << result; // Prints 10 to the screen
    return 0; // Returns 0 when the program ends successfully
}
