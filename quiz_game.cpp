#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int answer;

    cout << "===== C++ Quiz Game =====\n";

    // Question 1
    cout << "\n1. Who developed C++?\n";
    cout << "1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 2\n";
    }

    // Question 2
    cout << "\n2. Which symbol is used for single-line comment in C++?\n";
    cout << "1. //\n2. /* */\n3. #\n4. <!-- -->\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 1\n";
    }

    // Question 3
    cout << "\n3. Which of these is a valid data type in C++?\n";
    cout << "1. integer\n2. real\n3. int\n4. number\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 3\n";
    }

    // Question 4
    cout << "\n4. Which function is used to print output in C++?\n";
    cout << "1. printf()\n2. cout\n3. print()\n4. echo\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 2\n";
    }

    // Question 5
    cout << "\n5. Which header file is used for input and output?\n";
    cout << "1. stdio.h\n2. conio.h\n3. iostream\n4. math.h\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 3\n";
    }

    // Final Score
    cout << "\n===== Quiz Finished =====\n";
    cout << "Your score: " << score << "/5\n";

    return 0;
}