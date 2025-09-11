#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
    Program: Clean Code Examples
    Author: Özkan
    Date: 2025-09-11
    Description: Demonstrates clean code practices in C++.
                 Focus on readability, maintainability, and simplicity.
*/

// Function to calculate average of numbers
double calculateAverage(const vector<int>& numbers) {
    if (numbers.empty()) return 0.0;

    double sum = 0.0;
    for (int num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

// Function to display numbers
void displayNumbers(const vector<int>& numbers) {
    cout << "Numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

#if 0



int main() {
    vector<int> numbers = { 10, 20, 30, 40, 50 };

    // Display numbers
    displayNumbers(numbers);

    // Calculate and display average
    double avg = calculateAverage(numbers);
    cout << "Average: " << avg << endl;

    // Example of using meaningful variable names
    int totalStudents = 30;
    int passedStudents = 25;
    double passRate = static_cast<double>(passedStudents) / totalStudents * 100;

    cout << "Pass rate: " << passRate << "%" << endl;

    return 0;
}
#endif // 0