
include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {hu
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber) {
            cout << "Too High! Try a lower number." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too Low! Try a higher number." << endl;
        }
        else {
            cout << "\nCongratulations! You guessed it!" << endl;
            cout << "Total Attempts: " << attempts << endl;
        }

    } while (guess != secretNumber);

    return 0;
           }
