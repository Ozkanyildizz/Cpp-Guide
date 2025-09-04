#include <iostream> // Required library for input/output operations
using namespace std;

int main() {
    // 1. Arithmetic Operators
    int a = 10, b = 3;
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division (integer division)
    cout << "a % b = " << a % b << endl; // Modulus (remainder)

    // 2. Assignment Operators
    int c = 5;
    cout << "\nAssignment Operators:" << endl;
    c += 2; // c = c + 2
    cout << "c += 2 -> " << c << endl;
    c -= 1; // c = c - 1
    cout << "c -= 1 -> " << c << endl;
    c *= 3; // c = c * 3
    cout << "c *= 3 -> " << c << endl;
    c /= 2; // c = c / 2
    cout << "c /= 2 -> " << c << endl;
    c %= 2; // c = c % 2
    cout << "c %= 2 -> " << c << endl;

    // 3. Comparison Operators
    cout << "\nComparison Operators:" << endl;
    cout << "a == b: " << (a == b) << endl; // Equal?
    cout << "a != b: " << (a != b) << endl; // Not equal?
    cout << "a > b: " << (a > b) << endl;   // Greater than?
    cout << "a < b: " << (a < b) << endl;   // Less than?
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal?
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal?

    // 4. Logical Operators
    bool x = true, y = false;
    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl; // AND
    cout << "x || y: " << (x || y) << endl; // OR
    cout << "!x: " << (!x) << endl;         // NOT

    // 5. Increment/Decrement Operators
    int d = 5;
    cout << "\nIncrement/Decrement Operators:" << endl;
    cout << "d++: " << d++ << " (prints first, then increments)" << endl;
    cout << "++d: " << ++d << " (increments first, then prints)" << endl;
    cout << "d--: " << d-- << " (prints first, then decrements)" << endl;
    cout << "--d: " << --d << " (decrements first, then prints)" << endl;

    // 6. Bitwise Operators
    int e = 6, f = 3;
    cout << "\nBitwise Operators:" << endl;
    cout << "e & f: " << (e & f) << " (AND)" << endl;
    cout << "e | f: " << (e | f) << " (OR)" << endl;
    cout << "e ^ f: " << (e ^ f) << " (XOR)" << endl;
    cout << "~e: " << (~e) << " (NOT)" << endl;
    cout << "e << 1: " << (e << 1) << " (left shift)" << endl;
    cout << "e >> 1: " << (e >> 1) << " (right shift)" << endl;

    // 7. Conditional (Ternary) Operator
    int g = 7, h = 9;
    cout << "\nConditional (Ternary) Operator:" << endl;
    int max = (g > h) ? g : h;
    cout << "max = (g > h) ? g : h -> " << max << endl;

    // 8. Member and Access Operators (using struct as an example)
    struct Point {
        int x, y;
    };
    Point n;
    n.x = 1;
    n.y = 2;
    cout << "\nMember and Access Operators:" << endl;
    cout << "n.x: " << n.x << ", n.y: " << n.y << endl;

    return 0; // Returns 0 when the program ends successfully
}
