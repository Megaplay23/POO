#pragma once
#include <iostream>
namespace lume
{
	class tara {
	private:
		char* nume;
		unsigned int nrloc;
	public:
		tara();
		tara(const char* nume, unsigned int nrloc);
		tara(tara& altcv);
		~tara ();
		virtual void citire();
		virtual void afisare();
		tara& operator+(const int x)
		{
			nrloc = nrloc + x;
			std::cout << "Success!" << '\n';
			return *this;
		}
	};
	class capitala : public tara {
	public:
		capitala();
		capitala(const char* nume, unsigned int nrloc);
		capitala(capitala& yes);
		~capitala();
		void citire();
		void afisare();
		capitala& operator +(const int x)
		{
			nrloc = nrloc + x;
			std::cout << "Succes let's go!" << '\n';
			return *this;
		}
	private:
		char* nume;
		unsigned int nrloc;
	};
}