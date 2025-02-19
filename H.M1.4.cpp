

#include <iostream>
using namespace std;
int add(int n, int m);
int add(int n, int m) {
	return n + m;

}

int mult(int p, int q);
int mult(int p, int q) {
	return p * q;
}
void print(int d);
void print(int d) {
	cout << "The rsult is : " << d << endl;
}


int main()
{
	int nbr1, nbr2, somme, prod;
	int choice;
	cout << "Please enter the first number " << endl;
	cin >> nbr1;

	cout << "Please enter the second number " << endl;
	cin >> nbr2;

	cout << "Choose 3 for addition and 2 for multiplication " << endl;
	cin >> choice;

	do
	{

		if (choice != 3) {
			cout << "please enter the correct value" << endl;
			cin >> choice;
		}
		else if (choice != 2) {
			cout << "please enter the correct value" << endl;
			cin >> choice;
		}
	} while (choice != 2 && choice != 3);



	if (choice == 3) {
		cout << "you have choosen the addition" << endl;
		somme = add(nbr1, nbr2);
		print(somme);
	}
	else if (choice == 2) {
		cout << "you have choosen the multiplication" << endl;

		prod = mult(nbr1, nbr2);
		print(prod);
	}


}

