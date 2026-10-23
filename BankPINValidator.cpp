#include <iostream>
using namespace std;

int main() {
    int pin = 0;
    int attempts = 0;
    const int CORRECT_PIN = 4321;
    double balance = 1000.0;
    double deposit = 0.0;

    cout << "--- Security Access & Deposit System ---" << endl;

    do {
        cout << "Enter 4-digit PIN: ";
        cin >> pin;
        attempts++;
    } while (pin != CORRECT_PIN && attempts <= 3);

    if (pin == CORRECT_PIN) {
        cout << "Authentication Successful!" << endl;
        cout << "Enter deposit amounts (enter -1 to finish):" << endl;

        while (deposit != -1) {
            cout << "Enter deposit SAR: ";
            cin >> deposit;
            if (deposit != -1) {
                balance = balance + deposit;
            }
        }
        cout << "Updated Account Balance: SAR " << balance << endl;
    } else {
        cout << "Account Locked! Too many failed attempts." << endl;
    }

    return 0;
} 