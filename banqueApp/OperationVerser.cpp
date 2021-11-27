#include "OperationVerser.h"
#include "Operation.h"
#include <iostream>

using namespace std;
using namespace Banque;

Banque::OperationVerser::OperationVerser(string date, Devise* montant, string lib, Compte* C):Operation(date,montant,lib,C)
{
}

Banque::OperationVerser::OperationVerser(Devise* montant, Compte* C, string lib):Operation(montant,C,lib)
{
}
