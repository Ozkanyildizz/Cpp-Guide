#include <iostream>
using namespace std;

// Define a simple class
class Car {
public:
    // Member variables
    string brand;
    string model;
    int year;

    // Member function
    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

#if 0
int main() {
    // Create objects of Car class
    Car car1;
    Car car2;

    // Assign values to car1
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    // Assign values to car2
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 2022;

    // Display information of both cars
    cout << "Car 1 Info: ";
    car1.displayInfo();

    cout << "Car 2 Info: ";
    car2.displayInfo();

    return 0;
}
#endif
