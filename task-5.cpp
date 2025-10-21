// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void checkBalance(float balance);
void deposit(float & balance);
void withdraw(float & balance);

int main() {
    float balance = 1000.0;
    int option;
    
    do {
        
        cout << "\n ATM Menu: \n";
        cout << "1. Check balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Select an option: ";
        cin >> option;
            
        switch(option) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                deposit(balance);
                break;
            case 3:
                withdraw(balance);
                break;
            case 4:
                cout << "Exit the ATM!\n";
                break;
            default:
                cout << "Invalid option. Tryagain.\n";
                
        }
    } while(option != 4);
    
    return 0;
}

void checkBalance(float balance) {
    cout << "Your current balance is: $" << balance << endl;
}

void deposit(float& balance) {
    float amount;
    cout << "Enter deposit amount: $";
    cin >> amount;
    if(amount > 0) {
        balance += amount;
        cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    } else {
        cout << "Deposit amount must be positive.\n";
    }
}

void withdraw(float& balance) {
    float amount;
    cout << "Enter withdrawal amount: $";
    cin >> amount;
    if(amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
    } else if(amount > balance) {
        cout << "Insufficient balance.\n";
    } else {
        cout << "Withdrawal amount must be positive.\n";
    }
}
