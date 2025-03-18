// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Student {
    char Name[50];
	int Age;
	double GPA;

    

};



int main()
{
	Student info;
	cout << "Enter your name: ";
	cin.getline(info.Name, 50);
	
	cout << "Enter your age: ";
	cin >> info.Age;
	
	cout << "Enter your GPA: ";
	cin >> info.GPA;

	cout << "Student information :" << endl;
	cout << "Name : " << info.Name << endl;
		cout << "Age : " << info.Age << endl;
		cout << "GPA : " << info.GPA << endl;


	
}
