#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {  // Virtual function
        cout << "Some generic animal sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void makeSound() override {  // Override base class function
        cout << "Dog says: Woof Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat says: Meow!" << endl;
    }
};

#if 0
int main() {

    Animal* animal1 = new Dog(); // Pointer to Dog object
    Animal* animal2 = new Cat(); // Pointer to Cat object

    animal1->makeSound(); // Calls Dog's version
    animal2->makeSound(); // Calls Cat's version
    
    // Without Polimorphism 
    Animal animal3;
    animal3.makeSound();

    delete animal1;
    delete animal2;

    return 0;
}
#endif