#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

#if 0


int main() {
    cout << "=== std::map ===" << endl;
    // Ordered map (sorted by keys)
    map<string, int> ageMap;

    // Insert key-value pairs
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;
    ageMap["Charlie"] = 20;

    // Access and modify
    ageMap["Alice"] = 26;

    cout << "Contents of map:" << endl;
    for (auto& pair : ageMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Find element
    if (ageMap.find("Bob") != ageMap.end()) {
        cout << "Bob found with age " << ageMap["Bob"] << endl;
    }

    cout << "\n=== std::unordered_map ===" << endl;
    // Unordered map (hash-based, no key order)
    unordered_map<string, int> unMap;

    unMap["Alice"] = 25;
    unMap["Bob"] = 30;
    unMap["Charlie"] = 20;

    // Access and modify
    unMap["Alice"] = 26;

    cout << "Contents of unordered_map:" << endl;
    for (auto& pair : unMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Find element
    if (unMap.find("Bob") != unMap.end()) {
        cout << "Bob found with age " << unMap["Bob"] << endl;
    }

    return 0;
}
#endif // 0
