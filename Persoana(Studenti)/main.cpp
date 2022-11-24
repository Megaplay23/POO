#include "Student.h"
#include <algorithm>
#include <iostream>
int main() {
	Student studenti[] = {
		Student("Balteanu", "Luca Andrei (fraier)", Data(2002, 3, 17), 1208),
		Student("Luka", "Popovici", Data(2002, 11, 19), 1109),
		Student("Rotescu", "Adrian", Data(2002, 7, 12), 1107),
		Student("Alexandru", "Daniel", Data(2002, 6, 17), 1209),
		Student("Zamfir", "Stefan Alexandru", Data(2002, 9, 19), 1210),
		Student("Catarama", "Ovidiu", Data(2002, 9, 4), 1307)
	};

	std::sort(std::begin(studenti), std::end(studenti), [](auto const& a, auto const& b) /*->*/ {
		return a.getGrupa() < b.getGrupa();
		});

	for (int i = 0; i < 6; ++i) {
		studenti[i].afisare();
	}

	return 0;
}