// H.M 2.4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const int rowsize = 3;
	const int colsize = 3;
	int matrix[rowsize][colsize];
	for (int i = 0; i < rowsize; i++)
	{
		for (int j = 0; j < colsize; j++)
		{
			cout << "Enter the value for matrix[" << i << "][" << j << "]: ";
			cin >> matrix[i][j];
		}
	}
	cout << "The matrix is: " << endl;

	for (int i = 0; i < rowsize; i++)
	{
		int total = 0;

		for (int j = 0; j < colsize; j++)
		{
			cout << matrix[i][j] << " ";
			total = total + matrix[i][j];
		}
		

		cout <<"= " << total << endl;
	}

	return 0;
}
