#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand;

    void honk() {
        cout << brand << " goes honk honk!" << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    string model;

    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

#if 0
int main() {
    // Create object of derived class
    Car car1;

    car1.brand = "Toyota";  // Inherited from Vehicle
    car1.model = "Corolla"; // Specific to Car

    car1.displayInfo();
    car1.honk(); // Can also use base class method

    return 0;
}
#endif