#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imag;

    // Constructor
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator to add two Complex numbers
    Complex operator + (const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

#if 0
int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();

    Complex c3 = c1 + c2; // Uses overloaded + operator

    cout << "c1 + c2 = "; c3.display();

    return 0;
}
#endif
