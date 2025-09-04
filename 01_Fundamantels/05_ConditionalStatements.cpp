#include <iostream> // Required library for input/output operations
using namespace std;

int main() {
    // 1. if statement
    int number = 10;
    cout << "if statement:" << endl;
    if (number > 5) {
        cout << "number is greater than 5." << endl;
    }

    // 2. if - else statement
    cout << "\nif - else statement:" << endl;
    if (number % 2 == 0) {
        cout << "number is even." << endl;
    }
    else {
        cout << "number is odd." << endl;
    }

    // 3. if - else if - else statement
    cout << "\nif - else if - else statement:" << endl;
    if (number < 0) {
        cout << "number is negative." << endl;
    }
    else if (number == 0) {
        cout << "number is zero." << endl;
    }
    else {
        cout << "number is positive." << endl;
    }

    // 4. Combining multiple conditions
    cout << "\nCombining multiple conditions:" << endl;
    int age = 20;
    if (age >= 18 && age < 65) {
        cout << "Adult." << endl;
    }
    else if (age >= 65) {
        cout << "Senior." << endl;
    }
    else {
        cout << "Child." << endl;
    }

    // 5. switch-case statement
    cout << "\nswitch-case statement:" << endl;
    int day = 3;
    switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    default:
        cout << "Weekend" << endl;
        break;
    }

    // 6. Conditional (ternary) operator
    cout << "\nConditional (ternary) operator:" << endl;
    int x = 7, y = 9;
    int largest = (x > y) ? x : y;
    cout << "Largest: " << largest << endl;

    // 7. Nested if statements
    cout << "\nNested if statements:" << endl;
    int grade = 85;
    if (grade >= 50) {
        cout << "Passed." << endl;
        if (grade >= 90) {
            cout << "Excellent!" << endl;
        }
    }
    else {
        cout << "Failed." << endl;
    }

    return 0; // Returns 0 when the program ends successfully
}
