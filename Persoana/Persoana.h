#pragma once

#pragma warning(disable : 4996)

#include "Data.h"

class Persoana {
private:
	char* nume, * prenume;
	Data* dataNastere;
protected:
	void afisarePersoana();
public:
	Persoana(char const* nume, char const* prenume, Data const& dataNastere);
	Persoana(Persoana const&);
	~Persoana();


	Persoana& operator=(Persoana const&);

	char* getNume();
	char* getPrenume();
	Data* getDataNastere();

	void afisare();
};
