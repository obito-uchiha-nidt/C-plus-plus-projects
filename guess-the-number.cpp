#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;
    int maxAttempts = 5;
    char choice;

    srand(time(0)); // random number generate

    do {
        number = rand() % 100 + 1; // number between 1 to 100
        attempts = 0;

        cout << "\n=== Number Guessing Game ===\n";
        cout << "Guess a number between 1 and 100\n";

        while (attempts < maxAttempts) {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess == number) {
                cout << "?? Correct! You guessed in " << attempts << " attempts.\n";
                break;
            }
            else if (guess > number) {
                cout << "Too high!\n";
            }
            else {
                cout << "Too low!\n";
            }
        }

        if (guess != number) {
            cout << "? You lost! The number was: " << number << endl;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}
