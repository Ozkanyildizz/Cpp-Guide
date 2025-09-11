#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#if 0
int main() {
    vector<int> numbers = { 5, 2, 9, 1, 7 };

    cout << "Original numbers: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    // Lambda for sorting in ascending order
    sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a < b;
        });

    cout << "Sorted numbers (ascending): ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    // Lambda for printing squares
    cout << "Squares of numbers: ";
    for_each(numbers.begin(), numbers.end(), [](int n) {
        cout << n * n << " ";
        });
    cout << endl;

    // Lambda with capture
    int factor = 3;
    cout << "Numbers multiplied by factor " << factor << ": ";
    for_each(numbers.begin(), numbers.end(), [factor](int n) {
        cout << n * factor << " ";
        });
    cout << endl;

    return 0;
}
#endif // 0