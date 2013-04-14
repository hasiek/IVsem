// zbior klas liczacych obwody figur plaskich

#include <iostream>
#include <vector>
#include <cstdlib>
#include "Punkt.h"
#include "Wielokat.h"

using namespace std;

int main() {

	vector<Punkt> wielokat;
	wielokat[0] = Punkt(1,1);
	wielokat[1] = Punkt(1,2);
	wielokat[2] = Punkt(0,1);
	wielokat[3] = Punkt(0,2);

	Wielokat kwadrat = Wielokat(wielokat);
	cout << kwadrat.oblicz_obwod();

	system("pause");
	return 0;
}