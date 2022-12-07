#include "Header.h"
using namespace lume;
int main()
{
	tara RO = { "Romania",100 };
	RO.afisare();
	tara US(RO);
	US + (80);
	US.afisare();
	capitala Buc = { "Bucuresti", 20 };
	Buc.afisare();
	capitala USA(Buc);
	USA + (80);
	USA.afisare();
	return 0;
}