#include <iostream>
using namespace std;

/*
    Program: Project Folder Structure Example
    Author: Özkan
    Date: 2025-09-11
    Description: Demonstrates the concept of organizing a C++ project
                 with folders for source files, headers, and resources.
*/

// Example: simple math functions (would typically go in src/math.cpp)
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

#if 0



// Main program (would typically go in src/main.cpp)
int main() {
    int x = 10, y = 5;

    cout << "Add: " << add(x, y) << endl;
    cout << "Subtract: " << subtract(x, y) << endl;

    /*
         Recommended Project Folder Structure:

         ProjectRoot/
         ├─ src/          -> source files (.cpp)
         │   ├─ main.cpp
         │   └─ math.cpp
         ├─ include/      -> header files (.h/.hpp)
         │   └─ math.hpp
         ├─ build/        -> compiled binaries
         ├─ resources/    -> images, data files, config
         └─ README.md     -> project documentation
     */

    return 0;
}
#endif // 0