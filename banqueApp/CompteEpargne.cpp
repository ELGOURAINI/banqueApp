#include "CompteEpargne.h"
#include<iostream>
#include<assert.h>
using namespace std;
using namespace Banque;

Banque::CompteEpargne::CompteEpargne(Client* C, Devise* D, double Taux) :Compte(C, D)
{
	assert(Taux > 0 && Taux <= 100);

	this->TauxInter�t = Taux;
}

void Banque::CompteEpargne::calculInt�r�t() 
{
	 double a = this->TauxInter�t / 100;
	 this->crediter( &(this->pourcentage(a)));
}

void Banque::CompteEpargne::print() const
{
	cout << "le taux d'interet: " << this->TauxInter�t << endl;
}

bool Banque::CompteEpargne::debiter(Devise* M)
{
	if (this->permissionDebiter(*M))
		return this->debiter(M);
	return false;
}

