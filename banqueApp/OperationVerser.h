#pragma once
#include "Operation.h"
#include <iostream>
using namespace std;
namespace Banque
{
	class OperationVerser :public Operation
	{
		class Compte;
		class Devise;
	public:
		OperationVerser(Devise*,Compte*, string);
	};
}


