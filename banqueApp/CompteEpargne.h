#pragma once
#include "Compte.h"
#include<iostream>
using namespace std;
namespace Banque {

	class CompteEpargne : public Compte
	{
	private:
		double  TauxInter�t;

	public:
		CompteEpargne(Client*, Devise* ,double=0.0);
		void calculInt�r�t();
		void print() const;
		bool debiter(Devise* M);
	};

}


