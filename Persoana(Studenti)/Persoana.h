#include"Data.h"
#ifndef _Persoana_h_
#define _Persoana_h_
#pragma warning(disable : 4996)
class Persoana {
private:
	char* nume, * prenume;
	Data* dataNastere;
protected:
	void afisarePersoana();
public:
	Persoana(Persoana const& other);
	Persoana(char const* nume, char const* prenume, Data const& dataNastere);
	~Persoana();
	Persoana& operator=(Persoana const&);
	char* getNume();
	char* getPrenume();
	Data* getDataNastere();
	void afisare();
};
#endif