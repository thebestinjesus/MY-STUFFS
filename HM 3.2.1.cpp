// HM 3.2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int index;
	int i;
	char string[20];
	char string1[20];
	cout << "Enter a string: ";
	cin >> string;
	
	cout << "The length of string1 is " << strlen(string) << endl;

	strcpy_s(string1, 20, string);

	i= strlen(string1)<< endl;

	for (int index = i - 1; index >= 0; index--)
	{
		cout << string1[index];
	}
	return 0;
}
