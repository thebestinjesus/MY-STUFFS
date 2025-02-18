// H.W1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number, guess, numberOfGuesses = 0;

    // Initialize random seed
    srand(time(0));
    // Generate random number between 1 and 50
    number = rand() % 50 + 1;

    cout << "Welcome to the guessing game program!" << endl;
    cout << "Please enter a number between 1 and 50:" << endl;

    do
    {
        cin >> guess;
        numberOfGuesses++;

        if (guess < 1 || guess > 50) {
            cout << "The number is out of range. Please enter a number between 1 and 50." << endl;
        }
        else if (guess < number) {
            cout << "Try a higher number!" << endl;
        }
        else if (guess > number) {
            cout << "Try a lower number!" << endl;
        }
        else {
            cout << "Congratulations, you guessed it!" << endl;
            cout << "Number of guesses: " << numberOfGuesses << endl;
        }
    } while (guess != number);

    return 0;
}
