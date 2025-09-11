#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) {
        return 1; // base case
    }
    return n * factorial(n - 1); // recursive call
}

// Recursive function to calculate Fibonacci numbers
int fibonacci(int n) {
    if (n <= 1) {
        return n; // base cases: fib(0)=0, fib(1)=1
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
#if 0
int main() {
    int number = 5;

    cout << "Factorial of " << number << " is: " << factorial(number) << endl;

    cout << "Fibonacci sequence up to " << number << " terms: ";
    for (int i = 0; i < number; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
#endif 