#pragma once
#include <iostream>
using namespace std;
class jucarie {
protected: // #
	char* material;
	int varsta;
	double pret;
	static int contor;
public: // +
	jucarie();
	jucarie(const char* material, int varsta, double pret);
	jucarie(jucarie& cv);
	~jucarie();
	void SetMaterial(const char* cv);
	char* GetMaterial();
	void SetVarsta(int cv);
	int GetVarsta();
	void SetPret(double cv);
	double GetPret();
	static int GetContor();
	virtual void afisare();
	virtual void citire();

};
class minge : public jucarie
{
private:
	int diametru;
	enum sport {fotbal, baschet, tenis, volei} type;
public:
	minge();
	minge(const char* mat, int age, double price, int diam, int tip);
	minge(minge& una);
	~minge();
	minge operator=(minge& cv);
	void citire();
	void afisare();
};
class pistol : public jucarie {
private:
	int munitie;
	char* culoare;
public:
	pistol();
	pistol(const char* mat, int age, double price, int mun, const char* cul);
	pistol(pistol& cv);
	~pistol();
	pistol operator+(int munit);
	void citire();
	void afisare();
};