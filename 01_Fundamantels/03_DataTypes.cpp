#include <iostream> // Required library for input/output operations
using namespace std;

int main() {
    // Integer data type
    int number = 42;
    cout << "int: " << number << endl;

    // Short integer data type
    short shortNumber = 10;
    cout << "short: " << shortNumber << endl;

    // Long integer data type
    long longNumber = 100000;
    cout << "long: " << longNumber << endl;

    // Unsigned integer data type
    unsigned int positiveNumber = 100;
    cout << "unsigned int: " << positiveNumber << endl;

    // Unsigned long integer data type
    unsigned long positiveLongNumber = 1000000;
    cout << "unsigned long: " << positiveLongNumber << endl;

    // Wide character (wchar_t) data type
    wchar_t wideCharacter = L'Ç';
    wcout << L"wchar_t: " << wideCharacter << endl;

    // Floating-point number (float) data type
    float decimalNumber = 3.14f;
    cout << "float: " << decimalNumber << endl;

    // More precise floating-point number (double) data type
    double preciseNumber = 2.718281828;
    cout << "double: " << preciseNumber << endl;

    // Character (char) data type
    char character = 'A';
    cout << "char: " << character << endl;

    // Boolean (bool) data type
    bool isTrue = true;
    cout << "bool: " << isTrue << endl; // true = 1, false = 0

    // String data type
    string name = "Ali";
    cout << "string: " << name << endl;

    return 0; // Returns 0 when the program ends successfully
}
