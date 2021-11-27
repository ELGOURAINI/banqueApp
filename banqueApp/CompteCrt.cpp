#include "CompteCrt.h"
#include "Devise.h"
#include<iostream>
using namespace std;
using namespace Banque;

Devise* decouvert = new Devise(100.0);

Banque::CompteCrt::CompteCrt(Client* c, Devise* d, Devise* decouvert):Compte(c,d)
{
}

