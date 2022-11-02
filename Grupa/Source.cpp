#include "Header.h"
int main()
{
	Grupa first;
	{
	char name[] = "1208A";
	Grupa gr2(name, 14);
	Grupa gr3(gr2);
	gr3.afisare();
	}
	first.citire();
	first.afisare();
	return 0;
}
