#include <iostream>
using namespace std;

// Factorial function with unsigned long long
unsigned long long factorial(int n) {
    if (n < 0) return 0; // invalid input
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

#if 0
int main() {
    int number;
    cout << "Enter a non-negative integer (max ~20): ";
    cin >> number;

    if (number < 0) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    if (number > 20) { // unsigned long long sınırı
        cout << "Number too large! Max 20 for accurate factorial." << endl;
        return 1;
    }

    unsigned long long fact = factorial(number);
    cout << "Factorial of " << number << " is " << fact << endl;

    return 0;
}
#endif // 0