#pragma once

#include "Persoana.h"

class Angajat : public Persoana {
public:
	Angajat(char const* nume, char const* prenume, Data const& dn, Data const& da, int salariu);
	~Angajat();

	Data& getDataAngajare() { return *dataAngajare;  }
	int getSalariu() const { return salariu; }
	int getVarstaAngajare();

	void afisarePerioadaMuncita(Data& dataCurenta) const;
	void afisare();

private:
	Data* dataAngajare;
	int salariu;
};