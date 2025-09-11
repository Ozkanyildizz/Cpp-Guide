#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
    Program: Performance Tips
    Author: Özkan
    Date: 2025-09-11
    Description: Demonstrates best practices to improve performance
                 in C++ programs.
*/

#if 0



int main() {
    // 1. Reserve space in vector to avoid multiple reallocations
    vector<int> numbers;
    numbers.reserve(1000); // reserve capacity upfront

    for (int i = 0; i < 1000; i++) {
        numbers.push_back(i);
    }

    cout << "Vector size: " << numbers.size() << ", capacity: " << numbers.capacity() << endl;

    // 2. Use references to avoid copying large objects
    vector<string> words = { "apple", "banana", "cherry", "date" };

    cout << "\nPrinting words using references (avoiding copy):" << endl;
    for (const string& word : words) { // reference avoids copying
        cout << word << " ";
    }
    cout << endl;

    // 3. Precompute values instead of recalculating
    int x = 5;
    int y = 10;
    int precomputedSum = x + y; // compute once
    for (int i = 0; i < 1000; i++) {
        int result = precomputedSum * i; // reuse precomputed value
    }

    cout << "\nPerformance tips demonstrated." << endl;

    return 0;
}
#endif // 0