#include <iostream>
#include <string>
#include <vector>
using namespace std;

// -----------------------------
// Account Class
// -----------------------------
class Account {
private:
    int accountNumber;
    string holderName;
    double balance;

public:
    // Constructor
    Account(int accNo, string name, double initialBalance) {
        accountNumber = accNo;
        holderName = name;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << " successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << " successfully.\n";
        } else {
            cout << "Invalid withdrawal amount or insufficient balance.\n";
        }
    }

    // Display account details
    void display() const {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Holder Name: " << holderName << "\n";
        cout << "Balance: " << balance << "\n";
        cout << "-----------------------------\n";
    }

    // Getter for account number
    int getAccountNumber() const {
        return accountNumber;
    }
};

// -----------------------------
// Bank Class
// -----------------------------
class Bank {
private:
    vector<Account> accounts;

public:
    // Create new account
    void createAccount(int accNo, string name, double initialBalance) {
        accounts.push_back(Account(accNo, name, initialBalance));
        cout << "Account created successfully!\n";
    }

    // Find account by account number
    Account* findAccount(int accNo) {
        for (auto &acc : accounts) {
            if (acc.getAccountNumber() == accNo) {
                return &acc;
            }
        }
        return nullptr;
    }

    // Display all accounts
    void displayAllAccounts() {
        if (accounts.empty()) {
            cout << "No accounts available.\n";
            return;
        }
        for (const auto &acc : accounts) {
            acc.display();
        }
    }
};

// -----------------------------
// Main Function
// -----------------------------
int main() {
    Bank bank;
    int choice;

    do {
        cout << "\n===== Bank Management System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        cout << "5. Display All Accounts\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int accNo;
                string name;
                double initialBalance;
                cout << "Enter Account Number: ";
                cin >> accNo;
                cout << "Enter Holder Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Initial Balance: ";
                cin >> initialBalance;
                bank.createAccount(accNo, name, initialBalance);
                break;
            }
            case 2: {
                int accNo;
                double amount;
                cout << "Enter Account Number: ";
                cin >> accNo;
                Account* acc = bank.findAccount(accNo);
                if (acc) {
                    cout << "Enter Amount to Deposit: ";
                    cin >> amount;
                    acc->deposit(amount);
                } else {
                    cout << "Account not found.\n";
                }
                break;
            }
            case 3: {
                int accNo;
                double amount;
                cout << "Enter Account Number: ";
                cin >> accNo;
                Account* acc = bank.findAccount(accNo);
                if (acc) {
                    cout << "Enter Amount to Withdraw: ";
                    cin >> amount;
                    acc->withdraw(amount);
                } else {
                    cout << "Account not found.\n";
                }
                break;
            }
            case 4: {
                int accNo;
                cout << "Enter Account Number: ";
                cin >> accNo;
                Account* acc = bank.findAccount(accNo);
                if (acc) {
                    acc->display();
                } else {
                    cout << "Account not found.\n";
                }
                break;
            }
            case 5:
                bank.displayAllAccounts();
                break;
            case 6:
                cout << "Exiting program. Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
