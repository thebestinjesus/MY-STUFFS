

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream inSent;

	char sentence[80];
	inSent.open("output.txt", ios::in);
	inSent.getline(sentence, 80);
	cout << "The sentence in the file is: " << sentence << endl;
	inSent.close();
	return 0;


}

