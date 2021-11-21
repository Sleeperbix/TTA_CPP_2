#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    int guessNum;
    int remainingGuesses = 6;

    srand(time(NULL)); //Creates a random seed.
    int num = rand() % 100; //Generates a random number.

    //cout << "Random number is " << num << ".\n";
    cout << "Welcome to Guess the Number!\n\n";

    do
    {
        if (remainingGuesses == 0)
        {
            cout << "You have ran out of guesses! The number was " << num << "!\n";
            return 0;
        }

        cout << "You have " << remainingGuesses << " guesses left!\n";
        cout << "Guess a number between 1 and 100 : ";
        cin >> guessNum;

        if (guessNum > num)
        {
            cout << guessNum << " is higher!\n\n";
        }
        else if (guessNum < num)
        {
            cout << guessNum << " is lower!\n\n";
        }
        else
        {
            cout << "Well done! The number was " << num << "!\n";
        }

        remainingGuesses--;
    }
    while (guessNum != num);

    
    return 0;
}
