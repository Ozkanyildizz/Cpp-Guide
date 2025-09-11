#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    Book() = default;
    Book(string t, string a, int y) : title(t), author(a), year(y) {}
};

void saveBooksToFile(const vector<Book>& books, const string& filename) {
    ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& b : books) {
            outFile << b.title << "," << b.author << "," << b.year << endl;
        }
        outFile.close();
        cout << "Books saved successfully.\n";
    }
    else {
        cout << "Unable to open file for writing.\n";
    }
}

vector<Book> loadBooksFromFile(const string& filename) {
    vector<Book> books;
    ifstream inFile(filename);
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            size_t pos1 = line.find(',');
            size_t pos2 = line.rfind(',');
            if (pos1 != string::npos && pos2 != string::npos && pos1 != pos2) {
                string title = line.substr(0, pos1);
                string author = line.substr(pos1 + 1, pos2 - pos1 - 1);
                int year = stoi(line.substr(pos2 + 1));
                books.push_back(Book(title, author, year));
            }
        }
        inFile.close();
    }
    return books;
}

void displayBooks(const vector<Book>& books) {
    cout << "\n--- Book List ---\n";
    for (size_t i = 0; i < books.size(); i++) {
        cout << i + 1 << ". " << books[i].title
            << " by " << books[i].author
            << " (" << books[i].year << ")" << endl;
    }
    cout << "-----------------\n";
}

int main() {
    vector<Book> books = loadBooksFromFile("books.txt");
    string input;
    int choice = 0;

    do {
        cout << "\nBook Management System\n";
        cout << "1. Add Book\n2. Display Books\n3. Save & Exit\n";
        cout << "Enter your choice: ";

        getline(cin, input);
        try {
            choice = stoi(input);
        }
        catch (invalid_argument&) {
            cout << "Invalid input. Please enter a number.\n";
            continue; // tekrar sor
        }

        if (choice == 1) {
            string title, author, yearStr;
            int year;

            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter author: ";
            getline(cin, author);

            cout << "Enter year: ";
            getline(cin, yearStr);
            try {
                year = stoi(yearStr);
            }
            catch (invalid_argument&) {
                cout << "Invalid year. Book not added.\n";
                continue;
            }

            books.push_back(Book(title, author, year));
            cout << "Book added successfully.\n";
        }
        else if (choice == 2) {
            displayBooks(books);
        }
        else if (choice == 3) {
            saveBooksToFile(books, "books.txt");
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
