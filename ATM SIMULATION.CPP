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
#include <iostream>
#include <string>
#include <conio.h>  // For getch()
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

void getMaskedPin(int& pin) {
    char ch;
    pin = 0;
    cout << "Enter PIN: ";
    while ((ch = _getch()) != 13) { // 13 is Enter key
        if (ch == 8) { // Backspace key
            if (pin > 0) {
                pin /= 10;
                cout << "\b \b";
            }
        } else {
            pin = pin * 10 + (ch - '0');
            cout << '*';
        }
    }
    cout << endl;
}

int main() {
    string inputUsername;
    int pin;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >> inputUsername;
        getMaskedPin(pin);

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
#include <vector>
using namespace std;

struct Account {
    string username;
    int pin;
    double balance;
};

vector<Account> accounts = {
    {"user123", 1234, 1000.0},
    {"user456", 5678, 1500.0},
    {"user789", 9876, 2000.0}
};

bool authenticate(const string& inputUsername, int inputPin, Account& authenticatedAccount) {
    for (auto& acc : accounts) {
        if (acc.username == inputUsername && acc.pin == inputPin) {
            authenticatedAccount = acc;
            return true;
        }
    }
    return false;
}

void showMenu() {
    cout << "\nATM Menu\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
}

void deposit(Account& acc) {
    double depositAmount;
    cout << "Enter deposit amount: $";
    cin >> depositAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid deposit amount.\n";
    } else {
        acc.balance += depositAmount;
        cout << "Deposit successful! New balance: $" << acc.balance << endl;
    }
}

void withdraw(Account& acc) {
    double withdrawAmount;
    cout << "Enter withdraw amount: $";
    cin >> withdrawAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid withdrawal amount.\n";
    } else if (withdrawAmount > acc.balance) {
        cout << "Insufficient funds.\n";
    } else {
        acc.balance -= withdrawAmount;
        cout << "Withdrawal successful! New balance: $" << acc.balance << endl;
    }
}

int main() {
    string inputUsername;
    int pin;
    int attempts = 3;
    Account authenticatedAccount;

    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >> inputUsername;
        cout << "Enter PIN: ";
        cin >> pin;

        if (authenticate(inputUsername, pin, authenticatedAccount)) {
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
        showMenu
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Account {
    string username;
    int pin;
    double balance;
};

vector<Account> accounts;

void loadAccountsFromFile() {
    ifstream infile("accounts.txt");
    Account acc;
    while (infile >> acc.username >> acc.pin >> acc.balance) {
        accounts.push_back(acc);
    }
    infile.close();
}

void saveAccountsToFile() {
    ofstream outfile("accounts.txt");
    for (auto& acc : accounts) {
        outfile << acc.username << " " << acc.pin << " " << acc.balance << endl;
    }
    outfile.close();
}

bool authenticate(const string& inputUsername, int inputPin, Account& authenticatedAccount) {
    for (auto& acc : accounts) {
        if (acc.username == inputUsername && acc.pin == inputPin) {
            authenticatedAccount = acc;
            return true;
        }
    }
    return false;
}

void showMenu() {
    cout << "\nATM Menu\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
}

void deposit(Account& acc) {
    double depositAmount;
    cout << "Enter deposit amount: $";
    cin >> depositAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid deposit amount.\n";
    } else {
        acc.balance += depositAmount;
        cout << "Deposit successful! New balance: $" << acc.balance << endl;
    }
}

void withdraw(Account& acc) {
    double withdrawAmount;
    cout << "Enter withdraw amount: $";
    cin >> withdrawAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid withdrawal amount.\n";
    } else if (withdrawAmount > acc.balance) {
        cout << "Insufficient funds.\n";
    } else {
        acc.balance -= withdrawAmount;
        cout << "Withdrawal successful! New balance: $" << acc.balance << endl;
    }
}

int main() {
    loadAccountsFromFile();

    string inputUsername;
    int pin;
    int attempts = 3;
    Account authenticatedAccount;

    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >> inputUsername;
        cout << "Enter PIN: ";
        cin >> pin;

        if (authenticate(inputUsername, pin, authenticatedAccount)) {
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
                cout << "Current Balance: $" << authenticatedAccount.balance << endl;
                break;
            case 2:
                deposit(authenticatedAccount);
                break;
            case 3:
                withdraw(authenticatedAccount);
                break;
            case 4:
                saveAccountsToFile();
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
#include <vector>
using namespace std;

struct Account {
    string username;
    int pin;
    double balance;
};

vector<Account> accounts;

void loadAccountsFromFile() {
    ifstream infile("accounts.txt");
    Account acc;
    while (infile >> acc.username >> acc.pin >> acc.balance) {
        accounts.push_back(acc);
    }
    infile.close();
}

void saveAccountsToFile() {
    ofstream outfile("accounts.txt");
    for (auto& acc : accounts) {
        outfile << acc.username << " " << acc.pin << " " << acc.balance << endl;
    }
    outfile.close();
}

bool authenticate(const string& inputUsername, int inputPin, Account& authenticatedAccount) {
    for (auto& acc : accounts) {
        if (acc.username == inputUsername && acc.pin == inputPin) {
            authenticatedAccount = acc;
            return true;
        }
    }
    return false;
}

void showMenu() {
    cout << "\nATM Menu\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
}

void deposit(Account& acc) {
    double depositAmount;
    cout << "Enter deposit amount: $";
    cin >> depositAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid deposit amount.\n";
    } else {
        acc.balance += depositAmount;
        cout << "Deposit successful! New balance: $" << acc.balance << endl;
    }
}

void withdraw(Account& acc) {
    double withdrawAmount;
    double withdrawalLimit = 1000.0;  // Set a withdrawal limit for demonstration
    cout << "Enter withdraw amount: $";
    cin >> withdrawAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid withdrawal amount.\n";
    } else if (withdrawAmount > acc.balance) {
        cout << "Insufficient funds.\n";
    } else if (withdrawAmount > withdrawalLimit) {
        cout << "Withdrawal limit exceeded. Maximum allowed: $" << withdrawalLimit << endl;
    } else {
        acc.balance -= withdrawAmount;
        cout << "Withdrawal successful! New balance: $" << acc.balance << endl;
    }
}

int main() {
    loadAccountsFromFile();

    string inputUsername;
    int pin;
    int attempts = 3;
    Account authenticatedAccount;

    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Account {
    string username;
    int pin;
    double balance;
};

vector<Account> accounts;

void loadAccountsFromFile() {
    ifstream infile("accounts.txt");
    Account acc;
    while (infile >> acc.username >> acc.pin >> acc.balance) {
        accounts.push_back(acc);
    }
    infile.close();
}

void saveAccountsToFile() {
    ofstream outfile("accounts.txt");
    for (auto& acc : accounts) {
        outfile << acc.username << " " << acc.pin << " " << acc.balance << endl;
    }
    outfile.close();
}

bool authenticate(const string& inputUsername, int inputPin, Account& authenticatedAccount) {
    for (auto& acc : accounts) {
        if (acc.username == inputUsername && acc.pin == inputPin) {
            authenticatedAccount = acc;
            return true;
        }
    }
    return false;
}

void showMenu() {
    cout << "\nATM Menu\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
}

void deposit(Account& acc) {
    double depositAmount;
    cout << "Enter deposit amount: $";
    cin >> depositAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid deposit amount.\n";
    } else {
        acc.balance += depositAmount;
        cout << "Deposit successful! New balance: $" << acc.balance << endl;
        ofstream log("atm_transactions.log", ios::app);
        log << "Deposited: $" << depositAmount << " New balance: $" << acc.balance << endl;
        log.close();
    }
}

void withdraw(Account& acc) {
    double withdrawAmount;
    double withdrawalLimit = 1000.0;  // Set a withdrawal limit for demonstration
    cout << "Enter withdraw amount: $";
    cin >> withdrawAmount;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid withdrawal amount.\n";
    } else if (withdrawAmount > acc.balance) {
        cout << "Insufficient funds.\n";
    } else if (withdrawAmount > withdrawalLimit) {
        cout << "Withdrawal limit exceeded. Maximum allowed: $" << withdrawalLimit << endl;
def withdraw(self, amount):
    if amount <= 0:
        print("Invalid amount.")
        return
    if amount > self.balance:
        print("Insufficient funds.")
        return
    self.balance -= amount
    print(f"Successfully withdrew {amount}. New balance: {self.balance}")
def deposit(self, amount):
    if amount <= 0:
        print("Invalid deposit amount.")
        return
    self.balance += amount
    print(f"Successfully deposited {amount}. New balance: {self.balance}")
def display_menu(self):
    print("ATM Menu:")
    print("1. Check Balance")
    print("2. Deposit Money")
    print("3. Withdraw Money")
    print("4. Exit")
    
def main(self):
    while True:
        self.display_menu()
        choice = input("Please select an option (1-4): ")
        if choice == '1':
            print(f"Your current balance is: {self.balance}")
        elif choice == '2':
            amount = float(input("Enter amount to deposit: "))
            self.deposit(amount)
        elif choice == '3':
            amount = float(input("Enter amount to withdraw: "))
            self.withdraw(amount)
        elif choice == '4':
            print("Thank you for using the ATM!")
            break
        else:
            print("Invalid option. Please try again.")















