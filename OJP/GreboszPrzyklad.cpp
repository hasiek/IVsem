#include <iostream>
#include <cstdlib>

using namespace std;

class Silnik {

protected:

	int typ;

public: 

	Silnik(int n): typ(n) {		// do atrybutu "typ" przypisywana jest wartosc n

		cout << "Dziala konstruktor Silnik.\n";

	}

	~Silnik() {

		cout << "Dziala destruktor Silnik.\n";

	}
};

class Klimatyzacja {

	float temperat;

public:

	int nic;
	Klimatyzacja(float t) : temperat(t) {

		cout << "Dziala konstruktor Klimatyzacja.\n";

	}

	~Klimatyzacja() {

		cout << "Dziala destruktor Klimatyzacja.\n";
	}

};

class Sr_transportu {

protected:

	float poz_x,
		poz_y;

public:

	Sr_transportu() {

		cout << "Dziala konstruktor Sr_transportu.\n";

	}

	~Sr_transportu() {

		cout << "Dziala destruktor Sr_transportu.\n";

	}

};

class Samochod: public Sr_transportu {

protected:

	int aa;
	Silnik jego_silnik;

public:

	Samochod(int typ_silnika):
	  Sr_transportu(), jego_silnik(typ_silnika) {

		  cout << "Dziala konstruktor Samochod.\n";

	  }

	  ~Samochod() {

		  cout << "Dziala destruktor Samochod.\n";

	  }

};

class Mercedes: public Samochod {

protected:

	float xxx;
	Klimatyzacja casablanca;

public:

	Mercedes(float x, int typ_motoru, float klim):
	  Samochod(typ_motoru),
		  xxx(x),
		  casablanca(klim) {

			 cout << "Dziala konstruktor Mercedes.\n";

	  }

	~Mercedes() {

		cout << "Dziala destruktor Mercedes.\n";

	}

};

int main() {

	{
		cout << "Kreacja obiektu klasy Samochod.\n";

		Samochod czarny(500);
		cout << "\nObiekt czarny Samochod istnieje.\n Teraz bedzie likwidowany.\n";

	}

	cout << "Obiekt Samochod zlikwidowany.\n";

	{

		cout << "Kreacja obiektu klasy Mercedes.\n";

		Mercedes popielaty(6.5, 1200, 22.5);
		cout << "Obiekt Mercedes istnieje.\n Teraz bedzie likwidowany.\n";

	}

	cout << "Obiekt Mercedes zlikwidowany.\n";

	system("pause");
	return 0;
}