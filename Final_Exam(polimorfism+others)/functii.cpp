#include <cstring>
#include "Header.h"

int jucarie::contor = 0;

jucarie::jucarie()
{
	cout << "Apelare constructor gol - clasa jucarie" << '\n';
	material = nullptr;
	varsta = 0;
	pret = 0;
	contor++;
}

jucarie::jucarie(const char* Material, int Varsta, double Pret)
{
	cout << "Apelare constructor cu parametrii - clasa jucarie" << '\n';
	material = new char[strlen(Material) + 1];
	strcpy_s(material, strlen(Material)+1, Material);
	varsta = Varsta;
	pret = Pret;
	contor++;
}

jucarie::jucarie(jucarie& cv)
{
	cout << "Apelare constructor de copiere - clasa jucarie " << '\n';
	material = new char[strlen(cv.material) + 1];
	strcpy_s(material, strlen(cv.material) + 1, cv.material);
	varsta = cv.varsta;
	pret = cv.pret;
	contor++;
}

jucarie::~jucarie()
{
	cout << "Destructor - clasa jucarie" << '\n';
	if (material != nullptr)
	{
		delete[] material;
	}
	varsta = 0;
	pret = 0;
	contor--;
}

void jucarie::afisare()
{
	cout << '\n';
	cout << material << " " << varsta << " " << pret << '\n';
}

void jucarie::citire()
{
	if (material != nullptr)
	{
		delete[] material;
	}
	char MateriaL[100]; //temporar
	cout << '\n';
	cout << "-Clasa jucarie-" << '\n';
	cout << "Material: ";
	cin >> MateriaL;
	material = new char[strlen(MateriaL) + 1];
	strcpy_s(material, strlen(MateriaL) + 1, MateriaL);
	cout << "Varsta: ";
	cin >> varsta;
	cout << "Pret: ";
	cin >> pret;
}

void jucarie::SetMaterial(const char* cv)
{
	if (material != nullptr)
	{
		delete[] material;
	}
	material = new char[strlen(cv) + 1];
	strcpy_s(material, strlen(cv) + 1, cv);
}

char* jucarie::GetMaterial()
{
	return material;
}

void jucarie::SetVarsta(int cv)
{
	varsta = cv;
}

int jucarie::GetVarsta()
{
	return varsta;
}

void jucarie::SetPret(double cv)
{
	pret = cv;
}

double jucarie::GetPret()
{
	return pret;
}

int jucarie::GetContor()
{
	return contor;
}

//minge

minge::minge()
	:jucarie()
{
	cout << "Apelare constructor gol - subclasa minge" << '\n';
	material = nullptr;
	varsta = 0;
	pret = 0;
	sport type{};
	diametru = 0;
	
}

minge::minge(const char* mat, int age, double price, int diam, int tip)
	:jucarie(mat, age, price)
{
	cout << "Apelare constructor cu parametrii - subclasa minge" << '\n';
	if (material != nullptr)
	{
		delete[] material;
	}
	material = new char[strlen(mat) + 1];
	strcpy_s(material, strlen(mat) + 1, mat);
	varsta = age;
	pret = price;
	diametru = diam;
	if (tip == 1)
		type = fotbal;
	else if (tip == 2)
		type = baschet;
	else if (tip == 3)
		type = tenis;
	else if (tip == 4)
		type = volei;
}

minge::minge(minge& una)
	:jucarie(una)
{
	cout << "Apelare constructor de copiere - subclasa minge" << '\n';
	material = new char[strlen(una.material) + 1];
	strcpy_s(material, strlen(una.material) + 1, una.material);
	varsta = una.varsta;
	pret = una.pret;
	diametru = una.diametru;
	contor++;
}

minge::~minge()
{
	cout << "Destructor - subclasa minge" << '\n';
	diametru = 0;
	sport type{};
}

minge minge::operator=(minge& cv)
{
	diametru = cv.diametru;
	type = cv.type;
	return *this;
}

void minge::citire()
{
	
	if (material != nullptr)
	{
		delete[] material;
	}
	char MateriaL[100]; //temporar
	cout << '\n';
	cout << "-Clasa jucarie-" << '\n';
	cout << "Material: ";
	cin >> MateriaL;
	material = new char[strlen(MateriaL) + 1];
	strcpy_s(material, strlen(MateriaL) + 1, MateriaL);
	cout << "Varsta: ";
	cin >> varsta;
	cout << "Pret: ";
	cin >> pret;
	cout << '\n';
	cout << "-Subclasa minge-" << '\n';
	cout << "Diametru: ";
	cin >> diametru;
	cout << "1-fotbal 2-baschet 3-tenis 4-volei" << '\n';
	int tipv2;
	cin >> tipv2;
	if (tipv2 == 1)
		type = fotbal;
	else if (tipv2 == 2)
		type = baschet;
	else if (tipv2 == 3)
		type = tenis;
	else if (tipv2 == 4)
		type = volei;
}

void minge::afisare()
{
	cout << '\n';
	cout << "-Clasa jucarie-" << '\n';
	cout << material << " " << varsta << " " << pret << '\n';
	cout << "-Subclasa minge-" << '\n';
	cout << diametru << " ";
	if (type == fotbal)
		cout << "fotbal" << '\n';
	else if (type==baschet)
		cout << "baschet" << '\n';
	else if (type == tenis)
		cout << "tenis" << '\n';
	else if (type == volei)
		cout << "volei" << '\n';
	cout << '\n';
}

//pistol

pistol::pistol()
	:jucarie()
{	
	cout << "Constructor gol - subclasa pistol" << '\n';
	material = nullptr;
	varsta = 0;
	pret = 0;
	munitie = 0;
	culoare = nullptr;
}

pistol::pistol(const char* mat, int age, double price, int mun, const char* cul)
	:jucarie(mat, age, price)
{
	cout << "Constructor cu parametrii - subclasa pistol" << '\n';
	if (material != nullptr)
	{
		delete[] material;
	}
	material = new char[strlen(mat) + 1];
	strcpy_s(material, strlen(mat) + 1, mat);
	varsta = age;
	pret = price;
	if (culoare != nullptr)
	{
		delete[] culoare;
	}
	munitie = mun;
	culoare = new char[strlen(cul)+1];
	strcpy_s(culoare, strlen(cul)+1, cul);
}

pistol::pistol(pistol& cv)
	:jucarie(cv)
{
	cout << "Constructor de copiere - subclasa pistol" << '\n';
	material = new char[strlen(cv.material) + 1];
	strcpy_s(material, strlen(cv.material) + 1, cv.material);
	varsta = cv.varsta;
	pret = cv.pret;
	contor++;
	munitie = cv.munitie;
	culoare = new char[strlen(cv.culoare)+1];
	strcpy_s(culoare, strlen(cv.culoare)+1, cv.culoare);
}

pistol::~pistol()
{
	cout << "Destructor - subclasa pistol" << '\n';
	munitie = 0;
	if (culoare != nullptr)
	{
		delete[] culoare;
	}
}

pistol pistol::operator+(int munit)
{
	munitie = munitie + munit;
	return *this;
}

void pistol::citire()
{
	if (material != nullptr)
	{
		delete[] material;
	}
	char MateriaL[100]; //temporar
	cout << '\n';
	cout << "-Clasa jucarie-" << '\n';
	cout << "Material: ";
	cin >> MateriaL;
	material = new char[strlen(MateriaL) + 1];
	strcpy_s(material, strlen(MateriaL) + 1, MateriaL);
	cout << "Varsta: ";
	cin >> varsta;
	cout << "Pret: ";
	cin >> pret;
	cout << '\n';
	cout << "-Subclasa pistol-" << '\n';
	cout << "munitie: ";
	cin >> munitie;
	cout << "Culoare ";
	if (culoare != nullptr)
	{
		delete[] culoare;
	}
	char cull[100]; //also temporar
	cin >> cull;
	culoare = new char[strlen(cull) + 1];
	strcpy_s(culoare, strlen(cull)+1, cull);
}

void pistol::afisare()
{
	cout << '\n';
	cout << "-Clasa jucarie-" << '\n';
	cout << material << " " << varsta << " " << pret << '\n';
	cout << "-Subclasa minge-" << '\n';
	cout << munitie << " " << culoare << '\n';
	cout << '\n';
}