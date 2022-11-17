#include "Header.h"
Multime::Multime()
{
	date = nullptr;
	dim = 10;
	n = 0;
}
Multime::Multime(int d)
{
	date = new int[10];
	dim = d;
	n = 0;
}
Multime::Multime(Multime& m)
{
	m.dim = 10;
	m.date = new int[m.dim];
	if (date)
	{
		for (int i = 1; i <= n; i++)
		{
			m.date[i] = date[i];
			m.n++;
		}
	}
	else
	{
		m.date = nullptr;
		m.n = 0;
	}
}
Multime::~Multime()
{
	n = 0;
	dim = 0;
	delete[]date;
	date = nullptr;
}
/*void Multime::adauga(int x)
{
	int flag = 0;
	if (n < dim)
	{
		for (int i = 1; i <= n; i++)
		{
			if (date[i] == x)
				flag = 1;
		}
		if (flag == 0)
		{
			n++;
			date[n] = x;
			cout << "Numarul " << x << " a fost adaugat in multime!" << '\n';
		}
		else
		{
			cout << "Exista deja in multime!" << '\n';
		}
	}
	else
	{
		cout << "Multime plina!" << '\n';
	}
}
void Multime::extrage(int y)
{
	int poz = 0;
	for (int i = 1; i <= n; i++)
	{
		if (date[i] == y)
			poz = i;
	}
	if (poz == 0)
	{
		cout << "Nu exista!" << '\n';
	}
	else
	{
		cout << "Numarul " << date[poz] << " a fost extras din multime!" << '\n';
		date[poz] = date[n];
		n--;
	}
}*/
void Multime::afisare()
{
	for (int i = 1; i <= n; i++)
	{
		cout << date[i] << " ";
	}
	cout << '\n';
}
