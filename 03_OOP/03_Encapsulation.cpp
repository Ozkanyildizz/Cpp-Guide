#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Private variable: cannot be accessed directly

public:
    // Constructor
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else {
            cout << "Invalid withdrawal amount or insufficient funds!" << endl;
        }
    }

    // Public method to display balance
    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

#if 0
int main() {
    BankAccount account1(1000); // Initial balance = 1000

    account1.displayBalance();

    account1.deposit(500);       // Deposit 500
    account1.displayBalance();

    account1.withdraw(200);      // Withdraw 200
    account1.displayBalance();

    account1.withdraw(2000);     // Attempt invalid withdrawal
    account1.displayBalance();

    return 0;
}
#endif