#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); 
    int secretNumber = rand() % 1000 + 1; 
    int guess;
    int attempts = 0;
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 1000. Try to guess it!\n\n";
  do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "\nCongratulations! You've guessed the number (" << secretNumber << ") correctly!\n";
            cout << "You took " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}
