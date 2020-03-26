#include "Etudiant.h"

Etudiant::Etudiant()
{
	m_nomEtudiant = "EleveModele";
	m_noteSur20 = 20;
	m_noteSur10 = 10;
}

Etudiant::Etudiant(string nom, int note20, int note10)
{
    m_nomEtudiant = nom;
	this->m_noteSur20 = note20;
    this->m_noteSur10 = note10;
}

string Etudiant::getNom() const
{
	return m_nomEtudiant;
}

void Etudiant::setNom(string nom)
{
	m_nomEtudiant = nom;
}


int Etudiant::getNoteSur20() const
{
	return m_noteSur20;
}

void Etudiant::setNoteSur20(int noteSur20)
{
	m_noteSur20 = noteSur20;
}


int Etudiant::getNoteSur10() const
{
	return m_noteSur10;
}

void Etudiant::setNoteSur10(int noteSur10)
{
	m_noteSur10 = noteSur10;
}


float Etudiant::calculerMoyenne()
{
	return 13.37;
}