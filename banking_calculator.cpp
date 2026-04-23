#include <iostream>
#include <cmath>
using namespace std;

// Deposit
void deposit(double &balance) {
    double amt;
    cout << "Enter amount: ";
    cin >> amt;
    balance += amt;
}

// Withdraw
void withdraw(double &balance) {
    double amt;
    cout << "Enter amount: ";
    cin >> amt;
    if (amt > balance) cout << "Not enough money!\n";
    else balance -= amt;
}

// Balance
void checkBalance(double balance) {
    cout << "Balance: " << balance << endl;
}

// Simple Interest
void simpleInterest() {
    double p, r, t;
    cout << "Enter principal, rate, time: ";
    cin >> p >> r >> t;
    double si = (p * r * t) / 100;
    cout << "Simple Interest: " << si << endl;
}

// Compound Interest
void compoundInterest() {
    double p, r, t;
    cout << "Enter principal, rate, time: ";
    cin >> p >> r >> t;
    double ci = p * pow((1 + r/100), t);
    cout << "Total Amount: " << ci << endl;
}

// EMI Calculator
void emi() {
    double p, r, t;
    cout << "Enter loan, rate, time(years): ";
    cin >> p >> r >> t;
    r = r / (12 * 100);
    t = t * 12;
    double emi = (p * r * pow(1 + r, t)) / (pow(1 + r, t) - 1);
    cout << "Monthly EMI: " << emi << endl;
}

// Fixed Deposit
void fd() {
    double p, r, t;
    cout << "Enter amount, rate, time: ";
    cin >> p >> r >> t;
    double amt = p * pow((1 + r/100), t);
    cout << "FD Amount: " << amt << endl;
}

int main() {
    double balance = 0;
    int ch;

    do {
        cout << "\n--- BANK MENU ---\n";
        cout << "1.Deposit\n2.Withdraw\n3.Balance\n4.Simple Interest\n5.Compound Interest\n6.EMI\n7.FD\n8.Exit\n";
        cout << "Choice: ";
        cin >> ch;

        switch(ch) {
            case 1: deposit(balance); break;
            case 2: withdraw(balance); break;
            case 3: checkBalance(balance); break;
            case 4: simpleInterest(); break;
            case 5: compoundInterest(); break;
            case 6: emi(); break;
            case 7: fd(); break;
        }
    } while(ch != 8);

    return 0;
}
