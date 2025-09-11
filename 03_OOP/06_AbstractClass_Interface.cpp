#include <iostream>
using namespace std;

// Abstract class (interface)
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

#if 0
int main() {
    // Cannot create object of abstract class
    // Shape shape; // ❌ This would cause an error

    // Create objects of derived classes
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    // Call draw function (polymorphic behavior)
    shape1->draw(); // Circle's draw
    shape2->draw(); // Rectangle's draw

    delete shape1;
    delete shape2;

    return 0;
}
#endif
