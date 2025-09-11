#include <iostream>
#include <string>
using namespace std;

// Custom exception class
class NegativeNumberException : public exception {
    string message;
public:
    NegativeNumberException(string msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

double squareRoot(double num) {
    if (num < 0) {
        throw NegativeNumberException("Cannot calculate square root of a negative number!");
    }
    return sqrt(num);
}
#if 0
int main() {
    double values[] = { 25, -9, 16 };

    for (double v : values) {
        try {
            double result = squareRoot(v);
            cout << "Square root of " << v << " is " << result << endl;
        }
        catch (const NegativeNumberException& e) {
            cout << "Custom Exception Caught: " << e.what() << endl;
        }
        catch (const exception& e) { // Catch other standard exceptions
            cout << "Standard Exception: " << e.what() << endl;
        }
        catch (...) { // Catch any unknown exceptions
            cout << "Unknown Exception!" << endl;
        }
    }

    cout << "Program continues normally after exception handling." << endl;

    return 0;
}
#endif
