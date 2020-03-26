#include <string>//Librairie permettant de traiter les chaînes de caractères sans faire des tableaux de char
using namespace std;

#ifndef ETUDIANT_H
#define ETUDIANT_H

class Etudiant
{

public:
    /*Constructeurs*/
    Etudiant();//Constructeur par défaut
    Etudiant(string nomEtudiant, int noteSur20, int noteSur10);//Constructeur avec paramètres

    /*Méthodes*/
    string getNom() const;//Renvoie la valeur du nom d'étudiant
    void setNom(string nom);//Met la valeur du nom d'étudiant
    int getNoteSur20() const;//Renvoie la valeur de la note/20
    void setNoteSur20(int noteSur20);//Met la valeur de la note/20
    int getNoteSur10() const;//Renvoie la valeur de la note/10
    void setNoteSur10(int noteSur10);//Met la valeur de la note/10
    float calculerMoyenne(int noteSur10, int noteSur20);//Calcule la moyenne des notes

private:
    string m_nomEtudiant;
    int m_noteSur20;
    int m_noteSur10;
};

#endif // ETUDIANT_H
