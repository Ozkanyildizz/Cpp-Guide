#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
    Program: Mini Student Management System
    Author: Your Name
    Date: 2025-09-11
    Description: A simple student management mini-project demonstrating
                 OOP, vectors, and clean code principles.
*/

// Student class
class Student {
public:
    string name;
    int age;
    double grade;

    Student(string n, int a, double g) : name(n), age(a), grade(g) {}

    void display() const {
        cout << "Name: " << name
            << ", Age: " << age
            << ", Grade: " << grade << endl;
    }
};

// Function to add a student
void addStudent(vector<Student>& students) {
    string name;
    int age;
    double grade;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter grade: ";
    cin >> grade;
    cin.ignore(); // clear newline from buffer

    students.emplace_back(name, age, grade);
    cout << "Student added successfully!\n";
}

// Function to display all students
void displayStudents(const vector<Student>& students) {
    if (students.empty()) {
        cout << "No students available.\n";
        return;
    }

    cout << "\n--- Student List ---\n";
    for (const auto& student : students) {
        student.display();
    }
    cout << "-------------------\n";
}

int main() {
    vector<Student> students;
    int choice;
    string input;

    do {
        cout << "\nMini Student Management System\n";
        cout << "1. Add Student\n2. Display Students\n3. Exit\n";
        cout << "Enter choice: ";
        getline(cin, input);

        try {
            choice = stoi(input);
        }
        catch (...) {
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
        case 1:
            addStudent(students);
            break;
        case 2:
            displayStudents(students);
            break;
        case 3:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
