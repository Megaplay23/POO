#include "Header.h"
using namespace lume;
tara::tara()
{
	nume = nullptr;
	nrloc = 0;
}
tara::tara(const char* nume, unsigned int nrloc)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
	this->nrloc = nrloc;
}
tara::tara(tara& altcv)
{
	this->nume = new char[strlen(altcv.nume) + 1];
	strcpy_s(this->nume,strlen(altcv.nume)+1, altcv.nume);
	this->nrloc = altcv.nrloc;
}
tara::~tara()
{
	delete[]nume;
	nrloc = 0;
}
void tara::citire()
{
	std::cout << "Nume tara -> ";
	nume = new char[10];
	std::cin.getline(nume, 10);
	std::cout << "Numar locuitori -> ";
	std::cin >> nrloc;

}
void tara::afisare()
{
	std::cout << "Tara " << this->nume << " are " << this->nrloc << " locuitori." << '\n';
}
capitala::capitala()
{
	nume = nullptr;
	nrloc = 0;
}
capitala::capitala(const char* nume, unsigned int nrloc)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
	this->nrloc = nrloc;
}
capitala::capitala(capitala& yes)
{
	this->nume = new char[strlen(yes.nume) + 1];
	strcpy_s(this->nume, strlen(yes.nume)+1,yes.nume);
	this->nrloc = yes.nrloc;
}
capitala::~capitala()
{
	delete[]nume;
	nrloc = 0;
}
void capitala::citire()
{
	std::cout << "Nume capitala -> ";
	nume = new char[10];
	std::cin.getline(nume, 10);
	std::cout << "Numar locauitori -> ";
	std::cin >> nrloc;
}
void capitala::afisare()
{
	std::cout << "Capitala " << this->nume << " are " << this->nrloc << " locuitori" << '\n';
}