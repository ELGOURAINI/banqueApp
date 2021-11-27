#pragma once
#include "Compte.h"
#include <iostream>
using namespace std;
namespace Banque {
	class ComptePayant :public Compte
	{
	private:


	public:
		ComptePayant(Client*, Devise*);
		bool debiter(Devise* M);
		bool verser(Devise* M, Compte& C);
	};

}