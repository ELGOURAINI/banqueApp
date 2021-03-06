#pragma once
namespace Banque {
	class Devise
	{
	private:
		double valeur;
	public:
		Devise(double val);
		Devise& operator+(const Devise& M) const;
		Devise& operator-(const Devise& M) const;
		Devise& operator*(const Devise& M) const;
		bool operator<=(const Devise& M)const;
		bool operator>=(const Devise& M) const;
		void afficher() const;
		virtual void* ConvertTo(void*)=0;
	};
};
