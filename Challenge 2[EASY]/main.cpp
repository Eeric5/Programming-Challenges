/*
	- Challenge #2 [Easy] -

	Challenge:		Hello, coders! An important part of programming is being able to apply your programs,
					so your challenge for today is to create a calculator application that has use in your life. 
					It might be an interest calculator, or it might be something that you can use in the classroom. 
					For example, if you were in physics class, you might want to make a F = M * A calc.
					EXTRA CREDIT: make the calculator have multiple functions! Not only should it be able to calculate F = M * A, but also A = F/M, and M = F/A!
*/

#include <iostream>
using namespace std;

void ChallengeTwoEasy(void);

void main(void)
{
	ChallengeTwoEasy();
	system("pause");
};

void ChallengeTwoEasy(void)
{
	float fMass, fForce, fAcceleration = 0;
	int answer;

	cout << "Which one of the three would you like to solve for? (Mass = 1, Force = 2, Acceleration = 3)" << endl;
	cin >> answer;

	switch (answer)
	{
	case 1:
	{
		cout << "Mass\n";
		
		cout << "What is the Force of the object?" << endl;
		cin >> fForce;

		cout << "What is the Acceleration of the object" << endl;
		cin >> fAcceleration;

		cout << "The force of the object is " << fForce / fAcceleration << endl;
		break;
	}
	case 2:
	{
		cout << "Force\n";
		
		cout << "What is the Mass of the object?" << endl;
		cin >> fMass;

		cout << "What is the Acceleration of the object" << endl;
		cin >> fAcceleration;

		cout << "The force of the object is " << fMass * fAcceleration << endl;
		break;
	}
	case 3:
	{
		cout << "Acceleration\n";

		cout << "What is the Mass of the object?" << endl;
		cin >> fMass;

		cout << "What is the Force of the object" << endl;
		cin >> fForce;

		cout << "The force of the object is " << fForce / fMass << endl;
		break;
	}
	default:
		cout << "Incorrect Response" << endl;
		break;
	}
}
