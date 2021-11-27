#include "Compte.h"
#include "Devise.h"
#include<iostream>
#include "Operation.h"
using namespace std;
using namespace Banque;

Devise* Compte::plafond = new Devise(2000);
int Compte::count = 0;

Banque::Compte::Compte(Client* titu, Devise* sol):numcompte(++count)
{
	this->ref = new GC(1);
	this->titulaire = titu;
	this->solde = sol;
}

void Banque::Compte::crediter(Devise*M)
{
	*(this->solde) = *(this->solde)+*M;
}

bool Banque::Compte::debiter(Devise*M)
{
	if (*(this->solde) >= *M && *M <= *(Compte::plafond))
	{
		*(this->solde) = *(this->solde) - *M;
	return true;
	}
	return false;
}

Banque::Compte::Compte(const Compte& c):numcompte(c.numcompte)
{
	this->ref = c.ref;
	this->ref->incre();
	this->titulaire = c.titulaire;

}

bool Banque::Compte::verser(Devise* M, Compte& C)
{
	this->solde->afficher();
	if (this->debiter(M)==true) {
		this->solde->afficher();
		C.crediter(M);
		C.solde->afficher();
		return true;
	}
	return false;
}


void Banque::Compte::consulter() const
{
	cout << "num compte=" << this->numcompte << endl;
	this->solde->afficher();
	cout << "titulaire " << endl;
	this->titulaire->Afficher();
}

Devise& Banque::Compte::pourcentage(double a) const
{
	Devise *res = new Devise(a);
	return *(this->solde)*(*res);
}

bool Banque::Compte::permissionDebiter(Devise& M)
{
	Devise* D = new Devise(2);
	if((M * (*D)) >= *this->solde)
		return true;
	return false;
}

Compte::~Compte() {

	if (this->titulaire!=nullptr && this->ref->decr() ==0 ) 
	{
		delete this->titulaire; 
		this->titulaire = nullptr;
	}

}

void Banque::Compte::addOp(Operation& c)
{
	this->listOp.push_back(c);
}