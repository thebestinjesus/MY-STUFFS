// H,M 2,3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int A[10], B[10], i;
	for (i = 0; i <= 9; i++) {
		cout << "please enter the number with the index " << i << endl;
		cin >> A[i];
	}
	for (i = 0; i <= 9; i++) {
		B[i] = A[9 - i];
	}
	cout << "The original aray " << endl;
	for (i = 0; i <= 9; i++) {
		cout << A[i] << "-";
	}
	cout<< endl;
	cout << "The new aray " << endl;
	for (i = 0; i <= 9; i++) {
		cout << B[i] << "-";
	}

}

