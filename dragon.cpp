// Author	:	Rawa Saleh
// Date		:	May 8, 2012
// Compiler	:	Microsoft Visual Studio C++
// Works only in MS Windows.

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <Windows.h>
using namespace std;

void displayIntro();
int chooseCave();
void checkCave(int cave);

int main()
{
	string play_again = "yes";

	while (play_again == "yes" || play_again == "yes" || play_again == "Y" || play_again == "y")
	{
		displayIntro();
		int cave = chooseCave();
		checkCave(cave);

		cout << "Do you want to play again? Y/N" << endl;
		cin >> play_again;
	}
}

// Displays the introduction to the game.
void displayIntro()
{
	srand(time(NULL));
	cout << "You are on a planet full of dragons." << endl
		 << "In front of you, you see two caves." << endl
		 << "In one cave, the dragon is friendly and share his treasure with you." << endl
		 << "The other dragon is greedy and hungry, and will eat you on sight." << endl;
}

// Allows the player to choose a cave.
int chooseCave()
{
	int cave = 0;

	while (cave != 1 && cave != 2)
	{
		cout << "Which cave will you go into? 1 or 2?" << endl;
		cin >> cave;
	}

	return cave;
}

// Prints the result of the chosen cave.
void checkCave(int cave)
{
	cout << "You approach the cave..." << endl;
	Sleep(2000);
	cout << "It is dark and spooky..." << endl;
	Sleep(2000);
	cout << "A large dragon jumps out in front of you! He opens his jaws and... " << endl;
	Sleep(2000);

	int friendlycave = (rand() % 2) + 1;

	if (cave == friendlycave)
		cout << "Gives you his treasure!" << endl;
	else
		cout << "Gobbles you down in one bite!" << endl;
}
