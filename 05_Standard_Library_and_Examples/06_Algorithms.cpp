#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // accumulate için gerekli

using namespace std;

#if 0
int main() {
    vector<int> numbers = { 5, 2, 9, 1, 7, 2 };

    cout << "Original vector: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Sort ascending
    sort(numbers.begin(), numbers.end());
    cout << "After sort (ascending): ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Sort descending
    sort(numbers.begin(), numbers.end(), greater<int>());
    cout << "After sort (descending): ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Reverse
    reverse(numbers.begin(), numbers.end());
    cout << "After reverse: ";
    for (auto n : numbers) cout << n << " ";
    cout << endl;

    // Find element
    auto it = find(numbers.begin(), numbers.end(), 9);
    if (it != numbers.end()) cout << "Element 9 found at index " << distance(numbers.begin(), it) << endl;

    // Count occurrences of 2
    int count2 = count(numbers.begin(), numbers.end(), 2);
    cout << "Number of 2's: " << count2 << endl;

    // Accumulate (sum of elements)
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of elements: " << sum << endl;

    return 0;
}
#endif