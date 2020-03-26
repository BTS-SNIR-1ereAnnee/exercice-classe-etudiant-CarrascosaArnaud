#include <iostream>
#include "Etudiant.h"
using namespace std;

int main()
{
	/*Déclaration des variables*/
	string nom;
	int note1,note2;

	/*Demandes d'entrées utilisateur*/
	cout << "Veuillez renter votre nom\n";
	cin >> nom;
	cout << "Veuillez renter votre note/20\n";
	cin >> note2;
	cout << "Veuillez renter votre note/10\n";
	cin >> note1;

	Etudiant e(nom,note2,note1);//Création de l'objet

	/*Affichage*/
	cout << "\n\nNom de l'etudiant : \n" << e.getNom() << endl;
	cout << "Note sur 20 : \n" << e.getNoteSur20() << endl;
	cout << "Note sur 10 : \n" << e.getNoteSur10() << endl << endl;
	cout << e.getNom() << " : " << e.getNoteSur20() << "/20\t" << e.getNoteSur10() << "/10\n";
	cout << "Moyenne : " << e.calculerMoyenne(note1,note2) << endl;

	
	return 0;
}