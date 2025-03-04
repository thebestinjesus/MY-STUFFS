

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char word[20];
	char search;
	cout << "Enter a word: ";
	cin >> word;
	cout << "Enter a character to search: ";
	cin >> search;
	int count = 0;
	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] == search)
		{
			cout<<"the word is at the index "<<i;
			break;
		}
	}
}


