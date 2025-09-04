#include <iostream> // Required library for input/output operations
#include <string>   // Required library for string data type
using namespace std;

int main() {
    // 1. Basic output
    cout << "Hello, C++ world!" << endl; // Prints text to the screen

    // 2. Basic input
    int age;
    cout << "Enter your age: ";
    cin >> age; // Reads an integer from the user
    cout << "Your age: " << age << endl;

    // 3. Reading multiple values
    int a, b;
    cout << "Enter two integers (separated by space): ";
    cin >> a >> b;
    cout << "a: " << a << ", b: " << b << endl;

    // 4. Reading a floating-point number
    double pi;
    cout << "Enter a decimal number: ";
    cin >> pi;
    cout << "You entered: " << pi << endl;

    // 5. Reading character and string
    char character;
    cout << "Enter a character: ";
    cin >> character;
    cout << "You entered: " << character << endl;

    // Reading a single word with string
    string name;
    cout << "Enter your name: ";
    cin >> name; // Reads only the first word
    cout << "Hello, " << name << "!" << endl;

    // Reading a full line using getline
    string fullName;
    cout << "Enter your full name: ";
    cin.ignore(); // Clears leftover characters from previous cin
    getline(cin, fullName);
    cout << "Your full name: " << fullName << endl;

    // 6. Output formatting examples
    int number = 123;
    double decimal = 45.6789;
    cout << "\nOutput formatting:" << endl;
    cout << "Number: " << number << endl;
    cout << "Decimal: " << decimal << endl;

    // Fixed decimal places
    cout.precision(2);
    cout << fixed;
    cout << "Decimal (2 digits): " << decimal << endl;

    // 7. Reading multiple values from the user (example using loop)
    cout << "\nEnter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        int value;
        cin >> value;
        cout << "You entered: " << value << endl;
    }

    return 0; // Returns 0 when the program ends successfully
}
