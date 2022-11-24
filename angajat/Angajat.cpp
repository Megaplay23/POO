#include "Angajat.h"

#include <iostream>

Angajat::Angajat(char const* nume, char const* prenume, Data const& dn, Data const& da, int salariu)
	: Persoana(nume, prenume, dn)
	, salariu(salariu)
{
	dataAngajare = new Data(da);
}

Angajat::~Angajat()
{
	delete dataAngajare;
}

int Angajat::getVarstaAngajare()
{
	auto& dataNasterii = *getDataNastere();
	int varsta = dataAngajare->getAn() - dataNasterii.getAn();

	if (dataAngajare->getLuna() < dataNasterii.getLuna()) {
		return varsta - 1;
	}

	if (dataAngajare->getLuna() == dataNasterii.getLuna() && dataAngajare->getZi() < dataNasterii.getZi()) {
		return varsta - 1;
	}

	return varsta;
}

void Angajat::afisarePerioadaMuncita(Data& dataCurenta) const
{
	int ani = dataCurenta.getAn() - dataAngajare->getAn();
	
	int luni = 0;
	int zile = 0;

	if (dataCurenta.getLuna() < dataAngajare->getLuna()) {
		if (ani != 0) --ani;
		luni = (12 - dataAngajare->getLuna()) + dataCurenta.getLuna();
	}
	else if (dataCurenta.getLuna() == dataAngajare->getLuna()) {
		if (dataCurenta.getZi() < dataAngajare->getZi()) {
			luni = 11;
			zile = (30 - dataAngajare->getZi()) + dataCurenta.getZi();
		}
		else if (dataCurenta.getZi() > dataAngajare->getZi()) {
			zile = dataCurenta.getZi() - dataAngajare->getZi();
		}
	}
	else {
		luni = dataCurenta.getLuna() - dataAngajare->getLuna();
	}
}

void Angajat::afisare()
{
	afisarePersoana();
	std::cout << ", angajat pe data "
		<< getDataAngajare().getAn() << '.'
		<< getDataAngajare().getLuna() << '.'
		<< getDataAngajare().getZi() << '.'
		<< " al carui salariu este " << salariu
		<< std::endl;
}
