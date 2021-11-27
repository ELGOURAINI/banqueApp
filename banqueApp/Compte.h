#pragma once
#include"Client.h"
#include "Devise.h"
#include "GC.h"
#include <vector>
namespace Banque {
	class Compte
	{
		class Operation;
		//attributs
	private:
		const int numcompte;
		static int count;
		Client* titulaire;
		Devise* solde;
		static Devise* plafond;
		GC* ref;
		vector<Operation> listOp;
		// Methodes
	public : 
		Compte(Client*, Devise*); // avec parametres
		Compte(const Compte&);
		void crediter(Devise*M); 
		bool debiter(Devise*M); 
		bool verser(Devise* M, Compte& C);
		void consulter() const;
		~Compte();
		void addOp(Operation&);

	protected: 
		Devise& pourcentage(double a) const;
		bool permissionDebiter(Devise& M);



	};

};