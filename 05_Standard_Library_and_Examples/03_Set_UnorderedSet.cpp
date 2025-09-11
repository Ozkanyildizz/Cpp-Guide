#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

#if 0


int main() {
    cout << "=== std::set ===" << endl;
    // Ordered set (sorted, unique elements)
    set<int> orderedSet = { 5, 2, 9, 1, 7, 5 }; // duplicates ignored

    cout << "Elements in set: ";
    for (auto n : orderedSet) cout << n << " ";
    cout << endl;

    // Insert and erase
    orderedSet.insert(3);
    orderedSet.erase(9);

    cout << "After insert(3) and erase(9): ";
    for (auto n : orderedSet) cout << n << " ";
    cout << endl;

    // Find element
    auto it = orderedSet.find(2);
    if (it != orderedSet.end()) cout << "2 found in set" << endl;
    else cout << "2 not found" << endl;

    cout << "\n=== std::unordered_set ===" << endl;
    // Unordered set (hash-based, unique elements, no specific order)
    unordered_set<int> unSet = { 5, 2, 9, 1, 7, 5 };

    cout << "Elements in unordered_set: ";
    for (auto n : unSet) cout << n << " ";
    cout << endl;

    // Insert and erase
    unSet.insert(3);
    unSet.erase(9);

    cout << "After insert(3) and erase(9): ";
    for (auto n : unSet) cout << n << " ";
    cout << endl;

    // Find element
    if (unSet.find(2) != unSet.end()) cout << "2 found in unordered_set" << endl;
    else cout << "2 not found" << endl;

    return 0;
}
#endif // 0
