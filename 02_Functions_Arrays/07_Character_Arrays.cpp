#include <iostream>
#include <cstring> // for strlen, strcpy_s, strcat_s, strcmp
using namespace std;

#if 0
int main() {
    // Declare a character array (C-style string)
    char name[20] = "C++";

    cout << "Name: " << name << endl;
    cout << "Length of name: " << strlen(name) << endl;

    // Copy string into another character array (safe version)
    char language[20];
    strcpy_s(language, sizeof(language), "Programming");
    cout << "Language: " << language << endl;

    // Concatenate two character arrays (safe version)
    char fullText[40];
    strcpy_s(fullText, sizeof(fullText), name);     // copy "C++" into fullText
    strcat_s(fullText, sizeof(fullText), " ");      // add a space
    strcat_s(fullText, sizeof(fullText), language); // add "Programming"
    cout << "Concatenated string: " << fullText << endl;

    // Compare two character arrays
    char a[] = "Hello";
    char b[] = "World";
    if (strcmp(a, b) == 0) {
        cout << "Strings are equal." << endl;
    }
    else {
        cout << "Strings are different." << endl;
    }

    // Input from user
    char userInput[50];
    cout << "Enter a word: ";
    cin >> userInput;
    cout << "You entered: " << userInput << endl;

    return 0;
}
#endif