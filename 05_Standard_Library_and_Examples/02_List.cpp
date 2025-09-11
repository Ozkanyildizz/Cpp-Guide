#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

#if 0
int main() {
    // Create a list of integers
    list<int> numbers = { 5, 2, 9, 1, 7 };

    cout << "Original list: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Add elements to front and back
    numbers.push_back(10);
    numbers.push_front(0);
    cout << "After push_front and push_back: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Remove elements from front and back
    numbers.pop_back();
    numbers.pop_front();
    cout << "After pop_front and pop_back: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Insert element at specific position (using iterator)
    auto it = numbers.begin();
    advance(it, 2); // move iterator to index 2
    numbers.insert(it, 99);
    cout << "After insert at index 2: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Erase element at position 3
    it = numbers.begin();
    advance(it, 3);
    numbers.erase(it);
    cout << "After erase at index 3: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Sort list
    numbers.sort();
    cout << "After sorting: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Reverse list
    numbers.reverse();
    cout << "After reversing: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Size of list
    cout << "List size: " << numbers.size() << endl;

    return 0;
}
#endif