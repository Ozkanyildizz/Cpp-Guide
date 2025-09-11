#include <iostream>
#include <memory> // Required for smart pointers
using namespace std;

class Car {
public:
    string brand;

    Car(string b) : brand(b) {
        cout << "Car constructor called for " << brand << endl;
    }

    ~Car() {
        cout << "Car destructor called for " << brand << endl;
    }

    void display() {
        cout << "Car brand: " << brand << endl;
    }
};

#if 0
int main() {
    cout << "=== Unique Pointer ===" << endl;
    unique_ptr<Car> car1 = make_unique<Car>("Toyota");
    car1->display();
    // car1 automatically deleted when it goes out of scope

    cout << "\n=== Shared Pointer ===" << endl;
    shared_ptr<Car> car2 = make_shared<Car>("Ford");
    shared_ptr<Car> car3 = car2; // Shared ownership
    car2->display();
    car3->display();
    cout << "Use count: " << car2.use_count() << endl;

    cout << "\n=== Weak Pointer ===" << endl;
    weak_ptr<Car> carWeak = car2; // Weak reference
    if (auto carLock = carWeak.lock()) { // Check if object still exists
        carLock->display();
    }
    else {
        cout << "Object no longer exists" << endl;
    }

    return 0;
}
#endif