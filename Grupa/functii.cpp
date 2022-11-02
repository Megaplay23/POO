#include "Header.h"
Grupa::Grupa()
{
	nume = nullptr;
	nr_studenti = 0;
	nr_grupe++;
}
Grupa::Grupa(char* n, int nr) 
{
	nume = new char [strlen(n)+1];
	strcpy_s(nume, strlen(n) + 1, n);
	nr_studenti = nr;
	nr_grupe++;
}
Grupa::Grupa(Grupa& gr)
{
	nume = new char[strlen(gr.nume) + 1];
	strcpy_s(nume, strlen(gr.nume) + 1, gr.nume);
	nr_studenti = gr.nr_studenti;
	nr_grupe++;
}
Grupa::~Grupa()
{
	delete[]nume;
	nume = nullptr;
	nr_studenti = 0;
	nr_grupe--;
}
void Grupa::citire()
{
	cout << "Numele grupei ->  ";
	nume = new char[10];
	cin.getline(nume, 10);
	cout << "Nr. studenti din grupa -> ";
	cin >> nr_studenti;
}
void Grupa::afisare()
{
	cout << "Grupa | " << nume << " | are -" << nr_studenti << "- studenti." << '\n';
}