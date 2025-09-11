#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Constructor: called when object is created
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor: called when object is destroyed
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

#if 0
int main() {
    // Create objects
    Person person1("Alice", 25);
    Person person2("Bob", 30);

    // Display information
    person1.displayInfo();
    person2.displayInfo();

    cout << "End of main function." << endl;

    return 0;
}
#endif
