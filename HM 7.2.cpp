// HM 7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Book {
	char title[50];
	char author[50];
	int year;
};

int main()
{
	Book Detail[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the title of the Book " << i + 1 << " : ";
		cin.getline(Detail[i].title, 50);
		cout << "Enter the author of the Book " << i + 1 << " : ";
		cin.getline(Detail[i].author, 50);
		cout << "Enter the year of the Book " << i + 1 << " : ";
		cin >> Detail[i].year;
		cin.ignore();

		cout << endl;
		cout << endl;
	}
	court <<"Book Collection"<<endl;
	for (int i = 0; i <3; i++)
	{
		cout << i+1 << ". " << Detail[i].title << " by " << Detail[i].author << " (" << Detail[i].year << ")" << endl;

	}

}


