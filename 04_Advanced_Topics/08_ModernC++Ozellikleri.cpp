#include <iostream>
#include <vector>
#include <algorithm>
#include <memory> // for smart pointers
using namespace std;

int main() {
    cout << "=== Auto Keyword ===" << endl;
    // Old C++: need to write full type
    vector<int> vec = { 1, 2, 3, 4, 5 };
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Modern C++: auto deduces type automatically
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl << endl;

    cout << "=== Range-based for ===" << endl;
    // Old C++: traditional for loop
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Modern C++: range-based for
    for (auto n : vec) {
        cout << n << " ";
    }
    cout << endl << endl;

    cout << "=== Smart Pointer ===" << endl;
    // Old C++: manual new/delete
    int* pOld = new int(42);
    cout << "Old pointer value: " << *pOld << endl;
    delete pOld;

    // Modern C++: smart pointer
    unique_ptr<int> pNew = make_unique<int>(42);
    cout << "Unique pointer value: " << *pNew << endl << endl;

    cout << "=== Lambda Functions ===" << endl;
    // Old C++: function object
    struct MultiplyBy2 {
        void operator()(int n) { cout << n * 2 << " "; }
    };
    for_each(vec.begin(), vec.end(), MultiplyBy2());
    cout << endl;

    // Modern C++: lambda
    for_each(vec.begin(), vec.end(), [](int n) { cout << n * 2 << " "; });
    cout << endl << endl;

    cout << "=== nullptr vs NULL ===" << endl;
    int* ptrOld = NULL;       // old C++
    int* ptrNew = nullptr;    // modern C++
    cout << "ptrOld: " << ptrOld << ", ptrNew: " << ptrNew << endl << endl;

    cout << "=== Enum Class ===" << endl;
    // Old C++: unscoped enum
    enum ColorOld { Red, Green, Blue };
    ColorOld c1 = Green;
    cout << "Old enum value: " << c1 << endl;

    // Modern C++: scoped enum class
    enum class ColorNew { Red, Green, Blue };
    ColorNew c2 = ColorNew::Green;
    cout << "New enum value: " << static_cast<int>(c2) << endl;

    return 0;
}
