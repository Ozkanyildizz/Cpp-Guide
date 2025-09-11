#include <iostream> // Required library for input/output operations
using namespace std;

int main() {
    int operation;      // Stores the type of operation chosen by the user
    int number1, number2; // Stores the two numbers to operate on

    // Infinite loop: continues until the user exits
    while (true) {
        // Display menu and operation options
        cout << "******  Calculator ************" << endl
            << "0) Exit\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n"
            << "Please select the operation you want to perform: ";
        cin >> operation; // Read the user's choice

        // Exit the loop if the user chooses to exit
        if (operation == 0) {
            cout << "Exiting the program.\n";
            break;
        }

        // If a valid operation is selected, read two numbers
        if (operation >= 1 && operation <= 4) {
            cout << "Enter the two numbers you want to operate on: ";
            cin >> number1 >> number2;
        }

        // Perform the appropriate mathematical operation
        switch (operation) {
        case 1: // Addition
            cout << "Sum: " << number1 + number2 << endl;
            break;
        case 2: // Subtraction
            cout << "Difference: " << number1 - number2 << endl;
            break;
        case 3: // Multiplication
            cout << "Product: " << number1 * number2 << endl;
            break;
        case 4: // Division
            if (number2 != 0) // Check for division by zero
                cout << "Quotient: " << static_cast<double>(number1) / number2 << endl; // Convert number1 to double to show decimal result
            else
                cout << "Error: Cannot divide by zero!" << endl;
            break;
        default: // Invalid operation
            cout << "Invalid operation selected!" << endl;
        }
    }
    return 0; // Returns 0 when the program ends successfully
}

int new_number() {
}
