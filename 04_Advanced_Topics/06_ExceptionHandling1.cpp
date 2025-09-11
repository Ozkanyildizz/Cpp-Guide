#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division by zero error!"); // Throw an exception
    }
    return a / b;
}

#if 0
int main() {
    int x = 10;
    int y = 0;

    try {
        int result = divide(x, y);
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error& e) { // Catch specific exception
        cout << "Caught an exception: " << e.what() << endl;
    }
    catch (...) { // Catch any other exceptions
        cout << "Caught an unknown exception." << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}
#endif