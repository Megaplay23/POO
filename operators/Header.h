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
	Multime& operator+=(const int x)
	{
		int flag = 0;
		if (n < dim)
		{
			for (int i = 1; i <= n; i++)
			{
				if (this->date[i] == x)
					flag = 1;
			}
			if (flag == 0)
			{
				n++;
				this->date[n] = x;
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
		return *this;
	}
	Multime operator-=(const int y)
	{
		int poz = 0;
		for (int i = 1; i <= n; i++)
		{
			if (this->date[i] == y)
				poz = i;
		}
		if (poz == 0)
		{
			cout << "Nu exista!" << '\n';
		}
		else
		{
			cout << "Numarul " << date[poz] << " a fost extras din multime!" << '\n';
			this->date[poz] = this->date[n];
			n--;
		}
		return *this;
	}
	//void adauga(int);
	//void extrage(int);
	void afisare();
};
