#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance);
double depositMoney();
double withdrawMoney(double balance);

int main() {
    int choice;
    double balance = 0.0;
    
    do {
        cout << "********************************" << endl;
        cout << "* Welcome to the Banking System *" << endl;
        cout << "Enter Your choice: " << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;
        
        // Clear input buffer safely in C++
        cin.clear();
        cin.ignore(10000, '\n'); 
        
        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += depositMoney();
                showBalance(balance);
                break;
            case 3:
                balance -= withdrawMoney(balance);
                showBalance(balance); // Shows updated balance after withdrawal
                break;
            case 4:
                cout << "Thank you for using our banking system!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 4);
    
    return 0;
}

void showBalance(double balance) {
    cout << "Your current balance is: $" << fixed << setprecision(2) << balance << endl;
}

double depositMoney() {
    double amount;
    cout << "Enter the amount to deposit: $";
    cin >> amount;
    
    if (amount < 0) {
        cout << "Invalid amount! Deposit cannot be negative." << endl;
        return 0.0;
    }
    return amount;
}

double withdrawMoney(double balance) {
    double amount;
    cout << "Enter the amount to withdraw: $";
    cin >> amount;
    
    // 1. Check if amount is negative
    if (amount < 0) {
        cout << "Invalid amount!" << endl;
        return 0.0;
    }
    // 2. Check if user has enough funds
    else if (amount > balance) {
        cout << "Insufficient funds!" << endl;
        return 0.0;
    }
    // 3. Valid transaction: return the amount to subtract
    else {
        cout << "Withdrawal successful!" << endl;
        return amount;
    }
}