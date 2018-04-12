// Brain.cpp : Defines the entry point for the console application
//

#include "iostream"
#include "string"

using namespace std;

void say (string sayThis)
{
	cout << sayThis << endl;
}

std::string hear(std::string PromptUser)
{
	string userInput = "";
	cout << PromptUser << endl;
	cin >> userInput;
	return userInput;
}
