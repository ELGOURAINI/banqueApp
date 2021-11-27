#pragma once
#include "Compte.h"
#include<iostream>
using namespace std;
namespace Banque {
	class CompteCrt: public Compte
	{
	private:
		static Devise*  Decouvert;

	public:
		CompteCrt(Client*, Devise*, Devise*);
	};

}
