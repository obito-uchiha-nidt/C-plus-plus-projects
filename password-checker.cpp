#include <iostream>
using namespace std;

int main() {
    string password;
    bool hasUpper = false, hasLower = false;
    bool hasDigit = false, hasSpecial = false;

    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < password.length(); i++) {
        if (isupper(password[i])) hasUpper = true;
        else if (islower(password[i])) hasLower = true;
        else if (isdigit(password[i])) hasDigit = true;
        else hasSpecial = true;
    }

    cout << "\nPassword Strength: ";

    if (password.length() >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        cout << "Strong ??";
    }
    else if (password.length() >= 6 && (hasUpper || hasLower) && hasDigit) {
        cout << "Medium ??";
    }
    else {
        cout << "Weak ??";
    }

    return 0;
}
