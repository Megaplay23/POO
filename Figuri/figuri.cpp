#include"Figuri.h"
using namespace std;
Dreptunghi::Dreptunghi(int x1, int y1, int x2, int y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}
float Dreptunghi::arie() {
	return (float)(x2 - x1) * (y2 - y1);
}
float Dreptunghi::perimetru()
{
	return 2 * (x2 - x1) + 2 * (y2 - y1);
}
void Dreptunghi::afisare() {
	cout << "Dreptunghi cu coordonatele ("
		<< x1 << "," << y1
		<< ")-(" << x2 << "," << y2 << "), aria " <<
		arie() << ", si perimetru " << perimetru() << endl;
}
Cerc::Cerc(int x, int y, int r) {
	this->x = x;
	this->y = y;
	this->r = r;
}
float Cerc::arie() {
	const float PI = 3.14F;
	return PI * r * r;
}
float Cerc::perimetru()
{
	const float PI = 3.14F;
	return 2*PI*r;
}
void Cerc::afisare() {
	cout << "Cerc cu coordonatele ("
		<< x << "," << y
		<< "), raza " << r << ", aria "
		<< arie() << ", si perimetru " << perimetru() << endl;
}
Figura* figCuArieMax(Figura** figuri, int n) {
	float max = 0;
	Figura* figMax = NULL;
	for (int i = 0; i < n; i++) {
		float arie = figuri[i]->arie();
		if (arie > max) {
			max = arie;
			figMax = figuri[i];
		}
	}
	return figMax;
}

Triunghi::Triunghi(int x1, int y1, int x2, int y2, int x3, int y3)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	this->x3 = x3;
	this->y3 = y3;
}

void Triunghi::afisare()
{
	cout << "Triunghi cu coordonatele ("
		<< x1 << "," << y1
		<< ")-(" << x2 << "," << y2 << ")-(" << x3 << "," << y3 << "), aria " <<
		arie() << ", si perimetru " << perimetru() << endl;
}

float Triunghi::arie()
{
	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float p = (a + b + c) / 2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

float Triunghi::perimetru()
{
	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	return a+b+c;
}
Figura* figCuPeriMax(Figura** figuri, int n) {
	float max = 0;
	Figura* figMaxP = NULL;
	for (int i = 0; i < n; i++) {
		float peri = figuri[i]->perimetru();
		if (peri > max) {
			max = peri;
			figMaxP = figuri[i];
		}
	}
	return figMaxP;
}

void sortare(Figura** figuri, int n)
{
		int sw = 0;
		while (sw == 0)
		{
			sw = 1;
			for (int i = 0; i < n; i++)
			{
				float a = figuri[i]->arie();
				float b = figuri[i + 1]->arie();
				if (a > b)
				{
					a = a + b;
					b = a - b;
					a = a - b;
					sw = 0;
				}
			}
		}
		std::cout << '\n';
		std::cout << "Sortare:" << '\n';
		for (int i = 0; i < n; i++)
		{
			std::cout << "Figura " << figuri[i] << " cu arie " << figuri[i]->arie() << '\n';
		}
}
