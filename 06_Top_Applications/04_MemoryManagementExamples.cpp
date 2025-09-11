#include <iostream>
using namespace std;

/*
    Program: Memory Management Examples
    Author: Özkan
    Date: 2025-09-11
    Description: This program demonstrates dynamic memory allocation,
                 deallocation, and potential memory leaks in C++.
*/

#if 0



int main() {
    // 1. Static allocation
    int staticVar = 10;
    cout << "Static variable: " << staticVar << endl;

    // 2. Dynamic allocation
    int* dynamicVar = new int(20);
    cout << "Dynamically allocated variable: " << *dynamicVar << endl;

    // Modifying dynamic memory
    *dynamicVar = 50;
    cout << "Modified dynamic variable: " << *dynamicVar << endl;

    // 3. Array allocation dynamically
    int size = 5;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10;
    }

    cout << "Dynamically allocated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. Deallocate memory to avoid memory leak
    delete dynamicVar;
    delete[] arr;

    cout << "Memory deallocated successfully." << endl;

    // 5. Using smart pointers (C++11 and later)
#include <memory>
    unique_ptr<int> smartPtr = make_unique<int>(100);
    cout << "Smart pointer value: " << *smartPtr << endl;

    // smartPtr automatically deleted when going out of scope

    return 0;
}
#endif // 0