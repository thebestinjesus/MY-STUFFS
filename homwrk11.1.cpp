
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream  outSent;
	char sentence[80];
	outSent.open("output.txt", ios::out);
	cout << "Enter a sentence: ";
	cin.getline(sentence, 80);
	outSent << sentence << endl;
	outSent.close();

	
	

	

}
	
	
