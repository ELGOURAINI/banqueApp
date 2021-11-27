#include "ComptePayant.h"
using namespace Banque;
ComptePayant::ComptePayant(Client* c, Devise* d):Compte(c,d)
{
}

bool ComptePayant::debiter(Devise* M)
{
	Devise* D = new Devise(0.05);
	return this->debiter((&(*M+((*D) * (*M)))));
}

bool ComptePayant::verser(Devise* M, Compte& C)
{
	Devise* D = new Devise(0.05);
	return this->verser((&(*M + ((*D) * (*M)))),C);
}
