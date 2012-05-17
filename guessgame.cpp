// This is a "Guess the Number" game.
// Author	:	Rawa Saleh
// Date		:	May 8, 2012
// Compiler	:	Microsoft Visual Studio C++

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	const int MAXNUM = 20, MAXGUESSES = 6;

	string player;
	int guessestaken = 0;
	int number, guess;
	bool guessed = false;

	srand(time(NULL));
	number = (rand() % MAXNUM) + 1;

	cout << "Hello! What is your name?" << endl;
	cin >> player;
	cout << "Well, " << player << " I am thinking of a number between 1 and " << MAXNUM 
		 << "." << endl;

	while ((guessestaken < MAXGUESSES) && (guessed == false))
	{
		cout << "Take a guess." << endl;
		cin >> guess;
		
		guessestaken++;

		if (guess < number)
			cout << "Your number is too low." << endl;
		if (guess > number)
			cout << "Your number is too high." << endl;
		if (guess == number)
			guessed = true;

	}

	if (guessed == true)
		cout << "Good job, " << player << "! You guessed my number in "
		     << guessestaken << " guesses." << endl;
	else
		cout << "Nope. The number I was thinking of was " << number << "." << endl;
}




