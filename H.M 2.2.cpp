

#include <iostream>
using namespace std;
int main()
{
	int A[10], i, nbr, j=0;
	for (i = 0; i <= 9; i++) {
		cout << "Please enter the number with the index " << i << endl;
		cin >> A[i];
	}
	cout << " Please enter the number to search " << endl;
		cin >> nbr;
		for (i = 0; i <= 9; i++) {
			if (A[i] == nbr) {
				j = i;
			}
		}
		if (j != 0) {
			cout << "The number exists and its index position is " << j << endl;
		}
		else if (j == 0) {
			cout << "Number not found" << endl;
		}

		
}

