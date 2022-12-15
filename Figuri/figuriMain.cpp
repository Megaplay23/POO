#include"Figuri.h"
using namespace std;
int main() {
	const int n = 4;
	Figura* figuri[n];
	figuri[0] = new Dreptunghi(0, 0, 2, 5);
	figuri[1] = new Dreptunghi(0, 0, 2, 2);
	figuri[2] = new Cerc(0, 0, 3);
	figuri[3] = new Triunghi(0, 0, 0, 5, 3, 0);
	Figura* figMax = figCuArieMax(figuri, n);
	Figura* figMaxP = figCuPeriMax(figuri, n);
	cout << " Dintre figurile:" << endl;
	for (int i = 0; i < 4; i++) {
		cout << i << ". ";
		figuri[i]->afisare();
	}
	cout << endl
		<< " aria maxima o are:" << endl;
	figMax->afisare();
	cout << '\n' << "perimetrul maxim il are: " << '\n';
	figMaxP->afisare();
	sortare(figuri, n);
	for (int i = 0; i < n; i++) {
		delete figuri[i];
	}
	_getch();
	return 0;
}
