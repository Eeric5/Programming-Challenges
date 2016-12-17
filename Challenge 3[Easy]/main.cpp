/*
	- Challenge #3 [Easy] -

	Challenge:	Welcome to cipher day!
				write a program that can encrypt texts with an alphabetical caesar cipher. This cipher can ignore numbers, symbols, and whitespace.
				for extra credit, add a "decrypt" function to your program!
*/

#include <iostream>
using namespace std;

#include <string.h>

string Encrpyt(string text);
string Decrypt(string text);

void main(void)
{
	string text = "Hello World";
	cout << "Starting text: " << text.c_str() << endl;
	
	text = Encrpyt(text);
	cout << "After Encryption: " << text.c_str() << endl;

	text = Decrypt(text);
	cout << "After Decryption: " << text.c_str() << endl;

	system("pause");
}

string Encrpyt(string text)
{
	for (size_t i = 0; i < text.length(); i++)
		text[i] += 3;

	return text;
};


string Decrypt(string text)
{
	for (size_t i = 0; i < text.length(); i++)
		text[i] -= 3;

	return text;
}