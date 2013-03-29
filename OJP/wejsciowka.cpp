#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Prostokat;

class Kwadrat {

	string nazwa;
	int bok;

public:

	Kwadrat() {

		nazwa = ' ';
		bok = 0;

	}

	Kwadrat(string nazwa1, int bok1) {

		nazwa = nazwa1;
		bok = bok1;

	}

	void wypisz() {

		cout << nazwa << ' ' << bok << endl;

	}

	int obwod() {

		return 4*bok;

	}

	friend string wieksza(Kwadrat kwadrat, Prostokat prostokat);

};

class Prostokat {

	string nazwa;
	int bok1;
	int bok2;

public:

	Prostokat() {

		nazwa = ' ';
		bok1 = 0;
		bok2 = 0;

	}

	Prostokat(string nazwa1, int bok11, int bok21) {

		nazwa = nazwa1;
		bok1 = bok11;
		bok2 = bok21;

	}

	void wypisz() {

		cout << nazwa << ' ' << bok1 << ' ' << bok2 << endl;

	}

	int obwod() {

		return 2*bok1 + 2*bok2;

	}

	friend string wieksza(Kwadrat kwadrat, Prostokat prostokat);
};

string wieksza(Kwadrat kwadrat, Prostokat prostokat) {

	int poleP = prostokat.bok1 * prostokat.bok2;
	int poleK = kwadrat.bok * kwadrat.bok;

	if (poleP > poleK) return "Prostokat ma wieksze pole.";
	else if (poleK > poleP) return "Kwadrat ma wieksze pole.";
	else return "Pola figur sa rowne.";

}

int main() {

	Kwadrat kwadrat = Kwadrat("kwadrat", 3);
	Prostokat prostokat = Prostokat("prostokat", 1, 2);

	kwadrat.wypisz();
	prostokat.wypisz();
	cout << endl;

	cout << kwadrat.obwod() << endl;
	cout << prostokat.obwod() << endl;
	cout << endl;

	cout << wieksza(kwadrat, prostokat) << endl;
	cout << endl;

	system("pause");
	return 0;
}