#include "Student.h"
#include <iostream>
using namespace std;
Student::Student(char const* nume, char const* prenume, Data const& dn, int grupa)
	: Persoana(nume, prenume, dn)
	, grupa(grupa)
{
}
Student::Student(Student const& other)
	: Persoana(other)
	, grupa(other.grupa)
{
}
Student& Student::operator=(Student const& other)
{
	Persoana::operator=(other);
	grupa = other.grupa;
	return *this;
}
void Student::afisare()
{
	afisarePersoana();
	cout << ", in grupa -> " << grupa << endl;
}
