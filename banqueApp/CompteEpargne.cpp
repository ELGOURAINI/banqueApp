#include "CompteEpargne.h"
#include<iostream>
#include<assert.h>
using namespace std;
using namespace Banque;

Banque::CompteEpargne::CompteEpargne(Client* C, Devise* D, double Taux) :Compte(C, D)
{
	assert(Taux > 0 && Taux <= 100);

	this->TauxInterêt = Taux;
}

void Banque::CompteEpargne::calculIntérêt() 
{
	 double a = this->TauxInterêt / 100;
	 this->crediter( &(this->pourcentage(a)));
}

void Banque::CompteEpargne::print() const
{
	cout << "le taux d'interet: " << this->TauxInterêt << endl;
}

bool Banque::CompteEpargne::debiter(Devise* M)
{
	if (this->permissionDebiter(*M))
		return this->debiter(M);
	return false;
}

