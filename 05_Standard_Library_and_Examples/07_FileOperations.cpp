#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if 0



int main() {
    // 1. Write to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, C++ File I/O!\n";
        outFile << "This is a second line.\n";
        outFile.close();
        cout << "Data written to file successfully." << endl;
    }
    else {
        cout << "Unable to open file for writing." << endl;
    }

    // 2. Read from a file
    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        string line;
        cout << "\nReading file contents:" << endl;
        while (getline(inFile, line)) {  // read line by line
            cout << line << endl;
        }
        inFile.close();
    }
    else {
        cout << "Unable to open file for reading." << endl;
    }

    // 3. Append to a file
    ofstream appendFile("example.txt", ios::app);
    if (appendFile.is_open()) {
        appendFile << "Appending a new line.\n";
        appendFile.close();
        cout << "\nData appended successfully." << endl;
    }
    else {
        cout << "Unable to open file for appending." << endl;
    }

    return 0;
}
#endif // 0