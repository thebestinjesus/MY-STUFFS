// HM 7.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct date
{
	int day;
	int month;
	int year;
};
struct person
{
	char name[50];
	date dateofbirth;
};
int main()
{
	person detail;
	cout << "Please enter your name: " << endl;
	cin.getline(detail.name, 50);

	cout << "Please enter your date of birth: " << endl;
	cout << "Enter the Day: " << endl;
	cin >> detail.dateofbirth.day;

	cout << "Enter the Month: " << endl;
	cin >> detail.dateofbirth.month;

	cout << "Enter the Year: "<<endl;
	cin >> detail.dateofbirth.year;

	cout << "Person : " << detail.name << ", Born on : " << detail.dateofbirth.day << "/" << detail.dateofbirth.month << "/" << detail.dateofbirth.year << endl;
}


