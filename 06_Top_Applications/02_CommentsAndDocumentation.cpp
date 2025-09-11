#include <iostream>
using namespace std;

/*
    Program: Circle Calculator
    Author: Özkan
    Date: 2025-09-11
    Description: This program calculates the area and circumference of a circle.
                 Demonstrates proper commenting and documentation practices.
*/

const double PI = 3.141592653589793;

// Function to calculate area of a circle
double calculateArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate circumference of a circle
double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

#if 0
int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Check for negative input
    if (radius < 0) {
        cout << "Invalid input! Radius cannot be negative." << endl;
        return 1;
    }

    double area = calculateArea(radius);
    double circumference = calculateCircumference(radius);

    // Display results
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}
#endif