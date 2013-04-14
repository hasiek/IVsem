#include <iostream>
#include <cstdlib>

using namespace std;

class instrument {
	
	int cena;

public:

	virtual void wydaj_dzwiek() {

		cout << "Nieokreslony brzdek!" << endl;

	}

};

class trabka : public instrument {

public:

	void wydaj_dzwiek() {

		cout << "Tra-ta-ta!" << endl;

	}

};

class beben : public instrument {

public:

	void wydaj_dzwiek() {

		cout << "Bum-bum-bum!" << endl;

	}

};

class fortepian : public instrument {

public:

	void wydaj_dzwiek() {

		cout << "Plim-plim-plim" << endl;

	}

};

void muzyk(instrument &powierzony_instrument);

int main() {

	instrument jakis_instrument;
	trabka zlota_trabka;
	fortepian steinway_giseli;
	beben moj_werbel;

	cout << "Zwykle wywolanie funkcji skladowych\nna rzecz obiektow - jak dotad nic szczegolnego\n";

	jakis_instrument.wydaj_dzwiek();
	zlota_trabka.wydaj_dzwiek();
	steinway_giseli.wydaj_dzwiek();
	moj_werbel.wydaj_dzwiek();

	cout << "Wywolanie funkcji na rzecz obiektu\npokazywanego wskaznikiem instrumentu\n";

	instrument *wskinstr;

	// ustawienie wskaznika
	wskinstr = &jakis_instrument;

	wskinstr -> wydaj_dzwiek();

	cout << "Rewelacja okazuje sie przy\npokazaniem wskaznikiem \ndo instrumentow\nna obiekty klas pochodnych\nod klasy instrument!\n";

	wskinstr = &zlota_trabka;
	wskinstr -> wydaj_dzwiek();

	wskinstr = &steinway_giseli;
	wskinstr -> wydaj_dzwiek();

	wskinstr = &moj_werbel;
	wskinstr -> wydaj_dzwiek();

	cout << "Podobne zachowanie jest takze \n w stosunku do referencji\n";

	muzyk(jakis_instrument);
	muzyk(zlota_trabka);
	muzyk(steinway_giseli);
	muzyk(moj_werbel);

	system("pause");
	return 0;

}

void muzyk(instrument &powierzony_instrument) {

	powierzony_instrument.wydaj_dzwiek();

}