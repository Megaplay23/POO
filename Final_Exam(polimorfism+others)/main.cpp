#include "Header.h"
int main()
{
	/*
	
	jucarie j1;
	jucarie j2 = {"plastic", 12, 20.0};
	jucarie j3(j2);
	j3.SetMaterial("ceva cevator");
	j3.SetVarsta(60);
	j3.SetPret(420);
	cout << j3.GetMaterial() << " " << j3.GetVarsta() << " " << j3.GetPret() << '\n';
	j3.afisare();
	cout << '\n';
	cout << "Nr obiecte curente: " << j3.GetContor() << '\n';

	minge m1;
	minge m2 = { "textil", 20, 45.9, 10, 1 };
	minge m3(m2);
	m3.citire();
	m3.afisare();
	cout << '\n';
	cout << "Nr obiecte curente: " << j3.GetContor() << '\n';
	m3 = (m2);
	m3.afisare();
	*/
	jucarie j1;
	minge m1;
	pistol p1;
	pistol p2 = { "ceva", 20, 200, 10, "alb"};
	jucarie* v[4];
	cout << '\n';
	v[0] = &j1;
	v[1] = &m1;
	v[2] = &p1;
	v[3] = &p2;
	cout << "Numar obiecte: " << j1.GetContor() << '\n';
	cout << '\n';
	for (int i = 0; i <= j1.GetContor()-1; i++)
	{
		cout << '\n';
		cout << "Obiect nr. " << i+1 << '\n';
		v[i]->citire();
		v[i]->afisare();
	}
	p1 + (5);
	p1.afisare();

	return 0;
}