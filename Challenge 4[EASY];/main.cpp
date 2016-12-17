/*
	- Challenge #4 [Easy] -

	Challenge:		You're challenge for today is to create a random password generator!
					For extra credit, allow the user to specify the amount of passwords to generate.
					For even more extra credit, allow the user to specify the length of the strings he wants to generate!
*/

#include <iostream>
using namespace std;

#include <ctime>

void PasswordGenerator(unsigned int Amount, unsigned int Length);

void main(void)
{
	srand(unsigned int(0));

	PasswordGenerator(1, 8);
	cout << endl;
	PasswordGenerator(2, 10);

	system("pause");
};

void PasswordGenerator(unsigned int Amount, unsigned int Length)
{
	for (unsigned i = 0; i < Amount; i++)
	{
		for (unsigned int i = 0; i < Length; i++)
		{
			char temp  = rand() % 57 + 65;
			cout << temp;
		}
		cout << endl;
	}
}
