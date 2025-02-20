// H,M 2,6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()

{
	int matrix[3][3], i;
	int count = 0;

	for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Enter the element of matrix[" << i << "][" << j << "]: ";
			cin >> matrix[i][j];
		}
	}

	cout << "enter the number to be searched: ";
	int num;
	cin >> num;
	for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matrix[i][j] == num)
			{
				count++;
			}
		}
	}

	cout << "The number " << num << " is present " << count << " times in the matrix." << endl;
}

