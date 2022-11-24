#include "Persoana.h"

#include <iostream>
#include <string.h>
#include "Data.h"

using namespace std;

Persoana::Persoana(char const* nume, char const* prenume, Data const& dataNastere) {
	this->nume = new char[strlen(nume) + 1];
	this->prenume = new char[strlen(prenume) + 1];
	strcpy(this->nume, nume);
	strcpy(this->prenume, prenume);
	this->dataNastere = new Data(dataNastere);
}

Persoana::Persoana(Persoana const& other)
{
	*this = other;
}

Persoana::~Persoana() {
	delete[] nume;
	delete[] prenume;
	delete dataNastere;
}

Persoana& Persoana::operator=(Persoana const& other)
{
	if (this != &other) {
		delete[] nume;
		delete[] prenume;
		delete dataNastere;

		this->nume = new char[strlen(other.nume) + 1];
		this->prenume = new char[strlen(other.prenume) + 1];
		strcpy(this->nume, other.nume);
		strcpy(this->prenume, other.prenume);
		this->dataNastere = new Data(*other.dataNastere);
	}

	return *this;
}

char* Persoana::getNume() {
	return nume;
}
char* Persoana::getPrenume() {
	return prenume;
}

Data* Persoana::getDataNastere() {
	return dataNastere;
}

void Persoana::afisarePersoana() {
	cout << nume << " " << prenume
		<< ", data nastere: "
		<< dataNastere->getAn() << "."
		<< dataNastere->getLuna() << "."
		<< dataNastere->getZi();
}

void Persoana::afisare() {
	afisarePersoana();
	cout << endl;
}