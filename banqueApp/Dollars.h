#pragma once
#include "Devise.h"
#include <iostream>
using namespace std;
namespace Banque
{
	class Dollars :
		public Devise
	{
		Dollars(double val);
	};
}



