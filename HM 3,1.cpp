
#include <iostream>
using namespace std;
int main()
{
	char string[20];
	int index;
	cout << "Enter a string: ";
	cin >> string;
	
	int total = 0;
	for (index = 0; string[index] != '\0'; index++)
	{
		if (string[index] == 'a'||string[index]=='A') {
			total++;
		}
	}
	cout << "Total number of a's in the string is: " << total << endl;
	return 0;



}

