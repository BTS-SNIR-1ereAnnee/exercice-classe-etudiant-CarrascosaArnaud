#include <iostream>
#include "Etudiant.h"
using namespace std;

int main()
{
	Etudiant e;
	string nom;
	int note1,note2;

	cout << "Veuillez renter votre nom\n";
	cin >> nom;
	cout << "Veuillez renter votre note/10\n";
	cin >> note1;
	cout << "Veuillez renter votre note/20\n\n";
	cin >> note2;
	cout << e.getNom() << endl << e.getNoteSur10() << endl << e.getNoteSur20() << endl;
	return 0;
}