#pragma once

#include "Persoana.h"

class Student : public Persoana {
public:
	Student(char const* nume, char const* prenume, Data const& dn, int grupa);
	Student(Student const&);

	Student& operator=(Student const&);

	int getGrupa() const { return grupa; }

	void afisare();
private:
	int grupa;
};
