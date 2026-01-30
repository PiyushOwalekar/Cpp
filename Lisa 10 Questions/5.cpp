#include <iostream>
#include <string>

class BankAccount {
public:
  
    long accountNumber;
    std::string accountHolderName;
    double balance;

    BankAccount(long accNum, std::string name, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance is $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << ". New balance is $" << balance << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient balance to withdraw $" << amount << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount." << std::endl;
        }
    }

    void displayBalance() {
        std::cout << "\n--- Account Details ---" << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Current Balance: $" << balance << std::endl;
    }
};

int main() {
    
    BankAccount myAccount(123456789, "Bob", 1000.0);

    myAccount.displayBalance();

    std::cout << "\n--- Transactions ---" << std::endl;
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(1500.0); 

    myAccount.displayBalance();

    return 0;
}
