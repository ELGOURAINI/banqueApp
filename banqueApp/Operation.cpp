#include "Operation.h"
#include <iostream>
#include "Devise.h"
using namespace std;
using namespace Banque;

int Compt_Num_Op = 0;

Banque::Operation::Operation(Devise* m, Compte* C, string lib):Num_Op(++Compt_Num_Op)
{
	this->Montant = m;
	this->C = C;
	this->libelle = lib;
}
