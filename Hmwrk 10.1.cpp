
#include <iostream>
using namespace std;
int factorial(int n)

{

	if ( n == 1) 
	{
		return 1;
	}
	else 
	{
		return n * factorial(n - 1);
	}
}
int main()
{

	int nombre;
	cout << "please enter a number";
	cin >> nombre;
	cout << "the dactorial is :" << factorial(nombre);
}

