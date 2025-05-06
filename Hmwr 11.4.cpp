

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	char word[20];
	int counter=0;
	char word1[20];	
	char c;
	ifstream Insent;
	Insent.open("output.txt", ios::in);
	Insent >> word;

	while (!Insent.eof())
	{
		if (strlen(word) == 1)
		{
			counter;
		}
		else

		{
			counter++;
		}
		Insent >> word;

	}
	cout << "Number of words in the file: " << counter << endl;
	Insent.close();
}
