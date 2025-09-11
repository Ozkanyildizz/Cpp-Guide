#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#if 0


int main() {
    // Create a vector of integers
    vector<int> numbers = { 5, 2, 9, 1, 7 };

    cout << "Original vector: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Add elements
    numbers.push_back(10);
    numbers.push_back(3);
    cout << "After push_back: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Remove last element
    numbers.pop_back();
    cout << "After pop_back: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Insert element at position 2
    numbers.insert(numbers.begin() + 2, 99);
    cout << "After insert at index 2: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Erase element at position 3
    numbers.erase(numbers.begin() + 3);
    cout << "After erase at index 3: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Sort vector
    sort(numbers.begin(), numbers.end());
    cout << "After sorting: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Reverse vector
    reverse(numbers.begin(), numbers.end());
    cout << "After reversing: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Size of vector
    cout << "Vector size: " << numbers.size() << endl;

    return 0;
}

#endif // 0