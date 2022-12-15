#pragma once
#include<iostream>
#include <cmath>
#include<conio.h>
#pragma warning(disable : 4996)
class Figura {
public:
	virtual ~Figura() {}
	virtual float arie() = 0;
	virtual void afisare() = 0;
	virtual float perimetru() = 0;
};
class Dreptunghi : public Figura {
private:
	int x1, y1, x2, y2;
public:
	Dreptunghi(int x1, int y1, int x2, int y2);
	float arie();
	float perimetru();
	void afisare();
};
class Cerc : public Figura {
private:
	int x, y, r;
public:
	Cerc(int x, int y, int r);
	float arie();
	float perimetru();
	void afisare();
};
Figura* figCuArieMax(Figura** figuri, int n);
Figura* figCuPeriMax(Figura** figuri, int n);
class Triunghi : public Figura {
	int x1, y1, x2, y2, x3, y3;
public:
	Triunghi(int x1, int y1, int x2, int y2, int x3, int y3); // 6 parametrii
	void afisare();
	float arie();
	float perimetru();
};

void sortare(Figura** figuri, int n);