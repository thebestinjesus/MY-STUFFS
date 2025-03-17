// HM 7.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Employee
{
	char name[30];
	double salary;
};
Employee getemployee()
{
	Employee Detail;
	cout << "Enter Employee Name: "<<endl;
	cin.getline(Detail.name, 30);

	cout << "Enter Employee Salary: "<<endl;
	cin >> Detail.salary;
	return Detail;
};
int main()
{
	Employee info;
	info = getemployee();
	cout << "Employee : " << info.name << ", Salary: " << info.salary << endl; 
	
	return 0;

	

}


