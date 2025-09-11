#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Class template
template <typename T>
class Box {
private:
    T content;
public:
    Box(T c) : content(c) {}

    void setContent(T c) {
        content = c;
    }

    T getContent() {
        return content;
    }

    void display() {
        cout << "Content: " << content << endl;
    }
};

#if 0
int main() {
    // Using function template
    cout << "Sum of integers: " << add(5, 10) << endl;
    cout << "Sum of doubles: " << add(3.5, 2.1) << endl;

    cout << "\n=== Class Template ===" << endl;
    Box<int> intBox(100);
    intBox.display();
    intBox.setContent(200);
    intBox.display();

    Box<string> strBox("Hello");
    strBox.display();
    strBox.setContent("World");
    strBox.display();

    return 0;
}
#endif