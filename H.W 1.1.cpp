#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int nbr, i=1, S, B;
	int total = 0;
	B = 0;
	S = 0;
	float Avrg;

	while (i > 0)
	{
	
		cout << "Entrez un nombre entier positif: ";
		cin >> nbr;

		if (nbr == 0 || nbr < 0) {
			i--;

			break;
		}
		
		if (nbr > B)
		B = nbr;
		
		if ((nbr <= S||nbr<=2)||S<B)
		S = nbr;

		total = total + nbr;
		i++;
	}
	if (total == 0)
	cout << "Vous n'avez introduit aucune bonne valeur" << endl;
	else  {  
		Avrg = total / i;
		cout << "Vous avez introduit " << i << " nombres" << endl;
		cout << "Le plus ptit nombre est " << S << endl;
		cout << "Le plus grand nombre est " << B << endl;
		cout << " La moyenne est " << Avrg << endl;
	}
}
