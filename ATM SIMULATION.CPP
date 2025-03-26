#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to the ATM Simulation!" << endl;
    return 0;
}
#include <iostream>
using namespace std;

int userPin = 1234;
double balance = 1000.0;

int main() {
    cout << "ATM Simulation Program\n";
    return 0;
}
#include <iostream>
using namespace std;

int userPin = 1234;
double balance = 1000.0;

int main() {
    int pin;
    cout << "Enter PIN: ";
    cin >> pin;

    if (pin == userPin) {
        cout << "PIN accepted.\n";
    } else {
        cout << "Incorrect PIN.\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int userPin = 1234;
double balance = 1000.0;

int main() {
    int pin;
    cout << "Enter PIN: ";
    cin >> pin;

    if (pin == userPin) {
        cout << "PIN accepted.\n";
    } else {
        cout << "Incorrect PIN.\n";
    }
    return 0;
}

#include <iostream>
using namespace std;

int userPin = 1234;
double balance = 1000.0;

int main() {
    int pin;
    cout << "Enter PIN: ";
    cin >> pin;

    if (pin == userPin) {
        cout << "PIN accepted.\n";
        
        int choice;
        do {
            cout << "\nATM Menu\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit\n";
            cout << "3. Withdraw\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Current Balance: $" << balance << endl;
                    break;
                case 2:
                    cout << "Deposit feature selected.\n";
                    break;
                case 3:
                    cout << "Withdraw feature selected.\n";
                    break;
                case 4:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 4);
    } else {
        cout << "Incorrect PIN.\n";
    }
    return 0;
}

#include <iostream>
using namespace std;

int userPin = 1234;
double balance = 1000.0;

int main() {
    int pin;
    cout << "Enter PIN: ";
    cin >> pin;

    if (pin == userPin) {
        cout << "PIN accepted.\n";
        
        int choice;
        do {
            cout << "\nATM Menu\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit\n";
            cout << "3. Withdraw\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Current Balance: $" << balance << endl;
                    break;
                case 2: {
                    double depositAmount;
                    cout << "Enter deposit amount: $";
                    cin >> depositAmount;
                    balance += depositAmount;
                    cout << "Deposit successful! New balance: $" << balance << endl;
                    break;
                }
                case 3:
                    cout << "Withdraw feature selected.\n";
                    break;
                case 4:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 4);
    } else {
        cout << "Incorrect PIN.\n";
    }
    return 0;
}




