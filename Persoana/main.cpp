#include "Data.h"
#include "Persoana.h"
#include "Student.h"
#include <algorithm>
#include <iostream>
int main() {
	Student studenti[] = {
		Student("Vieru", "Andrei", Data(2002, 12, 5), 1212),
		Student("Petrisor", "Eduard-Gabriel", Data(2002, 11, 19), 1212),
		Student("Bejan", "Matei-Constantin", Data(2002, 4, 1), 1209),
		Student("Proca", "Victor", Data(2002, 6, 13), 1209),
		Student("Popescu", "Ion", Data(2000, 1, 1), 1409),
		Student("Istoc", "Adrian", Data(2002, 2, 25), 1212)
	};

	std::sort(std::begin(studenti), std::end(studenti), [](auto const& a, auto const& b) {
		return a.getGrupa() < b.getGrupa();
	});

	for (int i = 0; i < 6; ++i) {
		studenti[i].afisare();
	}

	return 0;
}