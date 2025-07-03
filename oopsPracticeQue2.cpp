#include<iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(int accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or Insufficient balance!" << endl;
        }
    }

    // Method to get current balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount(12345, 1000.0);  // accountNumber = 12345, balance = 1000

    myAccount.deposit(500);     // Deposit Rs. 500
    myAccount.withdraw(300);    // Withdraw Rs. 300

    cout << "Current Balance: " << myAccount.getBalance() << endl;

    return 0;
}
