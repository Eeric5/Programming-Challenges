/*
	- Challenge #1 [Easy] -

	Challenge:		create a program that will ask the users name, age, and reddit username. have it tell them the information back, in the format:
					your name is (blank), you are (blank) years old, and your username is (blank)
					EXTRA CREDIT: have the program log this information in a file to be accessed later.
*/


#include <iostream>
using namespace std;

#include <fstream>

void ChallengeOneEasy(void);

void main(void)
{
	ChallengeOneEasy();
	system("pause");
};

void ChallengeOneEasy(void)
{
	unsigned short UserAge;
	char UserName[10];
	char UserRedditName[10];

	cout << "What is your Name?\n";
	cin >> UserName;
	cin.ignore(0, INT_MAX);
	cin.clear();

	cout << "What is your Age?\n";
	cin >> UserAge;
	cin.ignore(0, INT_MAX);
	cin.clear();

	cout << "What is your Reddit UserName?\n";
	cin >> UserRedditName;
	cin.ignore(0, INT_MAX);
	cin.clear();

	cout << "Your name is " << UserName << ", you are " << UserAge << " years old, and your username is " << UserRedditName << endl;

	fstream FileStream;

	FileStream.open("Log.txt", ios_base::in | ios_base::out | ios_base::trunc);
	if (FileStream.is_open())
	{
		FileStream << "Name: " << UserName << "\nAge: " << UserAge << "\nReddit Username: " << UserRedditName << endl;

		FileStream.close();
	}
}
