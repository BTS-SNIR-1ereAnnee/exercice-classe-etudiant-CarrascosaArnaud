#include <string>
using namespace std;

#ifndef ETUDIANT_H
#define ETUDIANT_H

class Etudiant
{
public:
    string getEtudiant() const;
    void setEtudiant();
    int getNoteSur20() const;
    void setNoteSur20();
    int getNoteSur10() const;
    void setNoteSur10();
    float calculerMoyenne();
private:
    string etudiant;
    int noteSur20;
    int noteSur10;
};



#endif // ETUDIANT_H
