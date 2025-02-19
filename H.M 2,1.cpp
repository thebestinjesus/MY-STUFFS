// H.M 1,5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int A[10], i, j;
	int total = 0;
	int min, max;
	float avrg;
	cout << "Aray operations";
	for (i = 0; i <= 9; i++) {
		cout << "Please enter the number with index " << i << endl;
		cin >> A[i];
	}
	for (i = 0; i <= 9; i++) {
		total = total + A[i];
	}
	cout << "the sommation est " << total << endl;
	avrg = total / 10;
	cout << "The average is " << avrg<< endl;
	min = A[0];
	max = A[0];
	for (i = 1; i <= 9; i++) {
		if (A[i] < min) {
			min = A[i];
		}
		else if (A[i] > max) {
			max = A[i];
		}
	}
	cout << "The smalest is " << min << endl;
	cout << "The biggest is " << max << endl;
}


