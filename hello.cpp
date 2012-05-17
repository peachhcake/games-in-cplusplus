// This program says hello and asks for my name.
// Author	:	Rawa Saleh
// Date		:	May 8, 2012
// Compiler	:	Microsoft Visual Studio C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;

	cout << "Hello world!" << endl;
	cout << "What is your name?" << endl;
	cin >> name;
	cout << "It is good to meet you, " << name << "." << endl;
}