#pragma once
#include "Operation.h"
#include <iostream>
using namespace std;
namespace Banque
{
	class OperationRetrait :public Operation
	{
		class  Devise;
		class  Compte;
	public:
		OperationRetrait(Devise* montant, Compte* C, string lib);
	};
}


