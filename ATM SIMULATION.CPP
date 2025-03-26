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
                case 3: {
                    double withdrawAmount;
                    cout << "Enter withdraw amount: $";
                    cin >> withdrawAmount;

                    if (withdrawAmount > balance) {
                        cout << "Insufficient funds.\n";
                    } else {
                        balance -= withdrawAmount;
                        cout << "Withdrawal successful! New balance: $" << balance << endl;
                    }
                    break;
                }
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
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter PIN: ";
        cin >> pin;

        if (pin == userPin) {
            cout << "PIN accepted.\n";
            break;
        } else {
            attempts--;
            cout << "Incorrect PIN. Attempts left: " << attempts << endl;
        }
    }

    if (attempts == 0) {
        cout << "Too many incorrect attempts. Exiting...\n";
        return 0;
    }

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
            case 3: {
                double withdrawAmount;
                cout << "Enter withdraw amount: $";
                cin >> withdrawAmount;

                if (withdrawAmount > balance) {
                    cout << "Insufficient funds.\n";
                } else {
                    balance -= withdrawAmount;
                    cout << "Withdrawal successful! New balance: $" << balance << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);
    
    return 0;
}
#include <iostream>
#include <limits>
using namespace std;

int userPin = 1234;
double balance = 1000.0;

int main() {
    int pin;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter PIN: ";
        cin >> pin;

        if (cin.fail()) {
            cin.clear(); // clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a numeric PIN.\n";
        } else if (pin == userPin) {
            cout << "PIN accepted.\n";
            break;
        } else {
            attempts--;
            cout << "Incorrect PIN. Attempts left: " << attempts << endl;
        }
    }

    if (attempts == 0) {
        cout << "Too many incorrect attempts. Exiting...\n";
        return 0;
    }

    int choice;
    do {
        cout << "\nATM Menu\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid choice.\n";
        } else {
            switch (choice) {
                case 1:
                    cout << "Current Balance: $" << balance << endl;
                    break;
                case 2: {
                    double depositAmount;
                    cout << "Enter deposit amount: $";
                    cin >> depositAmount;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid deposit amount. Try again.\n";
                    } else {
                        balance += depositAmount;
                        cout << "Deposit successful! New balance: $" << balance << endl;
                    }
                    break;
                }
                case 3: {
                    double withdrawAmount;
                    cout << "Enter withdraw amount: $";
                    cin >> withdrawAmount;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid withdraw amount. Try again.\n";
                    } else if (withdrawAmount > balance) {
                        cout << "Insufficient funds.\n";
                    } else {
                        balance -= withdrawAmount;
                        cout << "Withdrawal successful! New balance: $" << balance << endl;
                    }
                    break;
                }
                case 4:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Try again.\n";
            }
        }
    } while (choice != 4);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string username = "user123";
int userPin = 1234;
double balance = 1000.0;

bool authenticate(string inputUsername, int inputPin) {
    return (inputUsername == username && inputPin == userPin);
}

int main() {
    string inputUsername;
    int pin;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >> inputUsername;
        cout << "Enter PIN: ";
        cin >> pin;

        if (authenticate(inputUsername, pin)) {
            cout << "Login successful.\n";
            break;
        } else {
            attempts--;
            cout << "Incorrect Username or PIN. Attempts left: " << attempts << endl;
        }
    }

    if (attempts == 0) {
        cout << "Too many incorrect attempts. Exiting...\n";
        return 0;
    }

    // Menu and other features...
}
#include <iostream>
#include <string>
using namespace std;

string username = "user123";
int userPin = 1234;
double balance = 1000.0;

bool authenticate(string inputUsername, int inputPin) {
    return (inputUsername == username && inputPin == userPin);
}

void showMenu() {
    cout << "\nATM Menu\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
}

int main() {
    string inputUsername;
    int pin;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >> inputUsername;
        cout << "Enter PIN: ";
        cin >> pin;

        if (authenticate(inputUsername, pin)) {
            cout << "Login successful.\n";
            break;
        } else {
            attempts--;
            cout << "Incorrect Username or PIN. Attempts left: " << attempts << endl;
        }
    }

    if (attempts == 0) {
        cout << "Too many incorrect attempts. Exiting...\n";
        return 0;
    }

    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: $" << balance << endl;
                break;
            case 2:
                // Deposit functionality
                break;
            case 3:
                // Withdraw functionality
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string username = "user123";
int userPin = 1234;
double balance = 1000.0;

bool authenticate(string inputUsername, int inputPin) {
    return (inputUsername == username && inputPin == userPin);
}

void showMenu() {
    cout << "\nATM Menu\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
}

void deposit() {
    double depositAmount;
    cout << "Enter deposit amount: $";
    cin >> depositAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid deposit amount.\n";
    } else {
        balance += depositAmount;
        cout << "Deposit successful! New balance: $" << balance << endl;
    }
}

int main() {
    string inputUsername;
    int pin;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >> inputUsername;
        cout << "Enter PIN: ";
        cin >> pin;

        if (authenticate(inputUsername, pin)) {
            cout << "Login successful.\n";
            break;
        } else {
            attempts--;
            cout << "Incorrect Username or PIN. Attempts left: " << attempts << endl;
        }
    }

    if (attempts == 0) {
        cout << "Too many incorrect attempts. Exiting...\n";
        return 0;
    }

    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: $" << balance << endl;
                break;
            case 2:
                deposit();
                break;
            case 3:
                // Withdraw functionality
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

string username = "user123";
int userPin = 1234;
double balance = 1000.0;

bool authenticate(string inputUsername, int inputPin) {
    return (inputUsername == username && inputPin == userPin);
}

void showMenu() {
    cout << "\nATM Menu\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
}

void deposit() {
    double depositAmount;
    cout << "Enter deposit amount: $";
    cin >> depositAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid deposit amount.\n";
    } else {
        balance += depositAmount;
        cout << "Deposit successful! New balance: $" << balance << endl;
    }
}

void withdraw() {
    double withdrawAmount;
    cout << "Enter withdraw amount: $";
    cin >> withdrawAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid withdrawal amount.\n";
    } else if (withdrawAmount > balance) {
        cout << "Insufficient funds.\n";
    } else {
        balance -= withdrawAmount;
        cout << "Withdrawal successful! New balance: $" << balance << endl;
    }
}

int main() {
    string inputUsername;
    int pin;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >> inputUsername;
        cout << "Enter PIN: ";
        cin >> pin;

        if (authenticate(inputUsername, pin)) {
            cout << "Login successful.\n";
            break;
        } else {
            attempts--;
            cout << "Incorrect Username or PIN. Attempts left: " << attempts << endl;
        }
    }

    if (attempts == 0) {
        cout << "Too many incorrect attempts. Exiting...\n";
        return 0;
    }

    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: $" << balance << endl;
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string username = "user123";
int userPin = 1234;
double balance = 1000.0;
ofstream transactionLog("atm_transactions.log", ios::app);

bool authenticate(string inputUsername, int inputPin) {
    return (inputUsername == username && inputPin == userPin);
}

void logTransaction(string transactionDetails) {
    transactionLog << transactionDetails << endl;
}

void deposit() {
    double depositAmount;
    cout << "Enter deposit amount: $";
    cin >> depositAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid deposit amount.\n";
    } else {
        balance += depositAmount;
        cout << "Deposit successful! New balance: $" << balance << endl;
        logTransaction("Deposited: $" + to_string(depositAmount) + " New balance: $" + to_string(balance));
    }
}

void withdraw() {
    double withdrawAmount;
    cout << "Enter withdraw amount: $";
    cin >> withdrawAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid withdrawal amount.\n";
    } else if (withdrawAmount > balance) {
        cout << "Insufficient funds.\n";
    } else {
        balance -= withdrawAmount;
        cout << "Withdrawal successful! New balance: $" << balance << endl;
        logTransaction("Withdrew: $" + to_string(withdrawAmount) + " New balance: $" + to_string(balance));
    }
}

int main() {
    string inputUsername;
    int pin;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >> inputUsername;
        cout << "Enter PIN: ";
        cin >> pin;

        if (authenticate(inputUsername, pin)) {
            cout << "Login successful.\n";
            break;
        } else {
            attempts--;
            cout << "Incorrect Username or PIN. Attempts left: " << attempts << endl;
        }
    }

    if (attempts == 0) {
        cout << "Too many incorrect attempts. Exiting...\n";
        return 0;
    }

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
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    transactionLog.close();
    return 0;
}












