/*
	- Challenge #4 [Easy] -

	Challenge:		You're challenge for today is to create a random password generator!
					For extra credit, allow the user to specify the amount of passwords to generate.
					For even more extra credit, allow the user to specify the length of the strings he wants to generate!
*/

#include <iostream>
using namespace std;

#include <ctime>

char * PasswordGenerator(unsigned int Amount, unsigned int Length);

void main(void)
{
	srand(unsigned int(0));

	cout << PasswordGenerator(1, 8);

	system("pause");
};

char * PasswordGenerator(unsigned int Amount, unsigned int Length)
{
	char * Password = new char[Length];

	for (unsigned int i = 0; i < Length; i++)
	{
		Password[i] = rand() % 50 + 35;
	}

	return Password;
}
