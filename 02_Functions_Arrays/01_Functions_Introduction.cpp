#include <iostream>
using namespace std;

// Function declaration (prototype)
int add(int a, int b);
void greet();

#if 0
int main() {
    // Calling a void function
    greet();

    // Calling a function with return value
    int x = 5, y = 10;
    int sum = add(x, y);

    cout << "Sum of " << x << " and " << y << " is: " << sum << endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

// Another function definition
void greet() {
    cout << "Hello! Welcome to the Functions Introduction example." << endl;
}
#endif