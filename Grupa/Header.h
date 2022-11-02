#pragma once
#include <iostream>
using namespace std;

class Grupa {
	char* nume;
	int nr_studenti;
	int nr_grupe;
public:
	Grupa(); //Constructor cu valori initiale 0 sau nule
	Grupa(char* n, int nr); //Constructor cu valorile din paranteza
	Grupa(Grupa& gr); //Copie
	~Grupa(); //Destructor
	void citire();
	void afisare();
};