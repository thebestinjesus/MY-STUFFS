

#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "enter a number that you want the multiplication table of: ";
	cin >> n;

	cout << "enter the number of multiples you want: ";
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cout << n << " x " << i << " = " << n * i << endl;
		cout << "-----------" << endl;
	}
	return 0;
		
}
