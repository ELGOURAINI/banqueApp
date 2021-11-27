#pragma once
#include <iostream>
using namespace std;
namespace Banque
{
	class Operation
	{
		class  Devise;
		class  Compte;
	private:
			const int Num_Op;
			static int Compt_Num_Op;
			Devise* Montant;
			string libelle;
			Compte* C;
	public:
		Operation(Devise*,Compte*, string);

	};
}


