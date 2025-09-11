#include <iostream>
#include <vector>
using namespace std;

// Abstract class: Person
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {
        cout << "Person constructor called for " << name << endl;
    }

    virtual ~Person() {
        cout << "Person destructor called for " << name << endl;
    }

    virtual void displayInfo() = 0; // Pure virtual function
};

// Derived class: Student
class Student : public Person {
private:
    int studentID;
    double gpa;

public:
    Student(string n, int a, int id, double g) : Person(n, a), studentID(id), gpa(g) {}

    void displayInfo() override {
        cout << "Name: " << name << ", Age: " << age
            << ", ID: " << studentID << ", GPA: " << gpa << endl;
    }

    // Operator overloading to add GPA
    double operator + (const Student& s) {
        return this->gpa + s.gpa;
    }

    void updateGPA(double newGPA) {
        if (newGPA >= 0 && newGPA <= 4.0) {
            gpa = newGPA;
        }
        else {
            cout << "Invalid GPA!" << endl;
        }
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, int a, string sub) : Person(n, a), subject(sub) {}

    void displayInfo() override {
        cout << "Name: " << name << ", Age: " << age
            << ", Subject: " << subject << endl;
    }
};

int main() {
    // Create objects
    Student s1("Alice", 20, 101, 3.5);
    Student s2("Bob", 21, 102, 3.8);
    Teacher t1("Dr. Smith", 45, "Mathematics");

    // Store persons in a vector (polymorphism)
    vector<Person*> people;
    people.push_back(&s1);
    people.push_back(&s2);
    people.push_back(&t1);

    // Display info for all
    cout << "Student Management System Info:" << endl;
    for (Person* p : people) {
        p->displayInfo();
    }

    // Operator overloading example
    double totalGPA = s1 + s2; // Adds GPA using overloaded +
    cout << "\nTotal GPA of Alice and Bob: " << totalGPA << endl;

    // Update GPA using encapsulation
    s1.updateGPA(3.9);
    cout << "\nAfter updating Alice's GPA:" << endl; 
    s1.displayInfo();

    return 0;
}
