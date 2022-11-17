#include "Header.h"
#include <conio.h>
int main()
{
	Multime m(10);
	(m+=(4))+=(10);
	m+=(3);
	m.afisare();
	m-=(4);
	m-=(4);
	m.afisare();
	m+=(9);
	m+=(2);
	m+=(2);
	m.afisare();
	_getch();
	return 0;
}
