#include "OperationRetrait.h"
#include "Operation.h"
#include<iostream>
using namespace std;
using namespace Banque;

Banque::OperationRetrait::OperationRetrait(Devise* montant, Compte* C, string lib) :Operation(montant, C, lib)
{
}
