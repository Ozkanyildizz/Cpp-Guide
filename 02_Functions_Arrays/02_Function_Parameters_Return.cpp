#include <iostream>
using namespace std;

// Function that takes parameters and returns a value
int multiply(int a, int b) {
    return a * b;
}

// Function that takes parameters but returns nothing (void)
void printSum(int a, int b) {
    cout << "The sum of " << a << " and " << b << " is: " << (a + b) << endl;
}

// Function with no parameters but with a return value
int getRandomNumber() {
    return 42; // just an example
}

// Function with no parameters and no return value
void sayHello() {
    cout << "Hello from a void function with no parameters!" << endl;
}

#if 0
int main() {
    int x = 6, y = 7;

    // Using function with parameters & return value
    int product = multiply(x, y);
    cout << "The product of " << x << " and " << y << " is: " << product << endl;

    // Using function with parameters & no return value
    printSum(x, y);

    // Using function with no parameters but a return value
    int randomValue = getRandomNumber();
    cout << "Random value returned: " << randomValue << endl;

    // Using function with no parameters & no return value
    sayHello();

    return 0;
}
#endif