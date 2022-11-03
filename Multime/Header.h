#pragma once
#include <iostream>
using namespace std;
class Multime {
	int* date; //vector de numere
	int dim; //dimensiunea lui date
	int n; //nr de elemente
public:
	Multime();
	Multime(int d);
	Multime(Multime& m);
	~Multime();
	void adauga(int);
	void extrage(int);
	void afisare();
};