

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream Outsent;
	char sentence[50];
	Outsent.open("output.txt", ios::app);
	cout << "Enter a scond sentence: ";
	cin.getline(sentence, 50);
	Outsent << sentence << endl;
	Outsent.close();
	return 0;

}


