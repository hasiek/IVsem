// klasa punkt z setterami i getterami, licz¹ca odleg³oœæ od pocz¹tku uk³adu wsp., klasa dziedzicz¹ca kolorowy punkt i modyfikacja metod klasy punkt, wyœwietlenie inf. o kolorowym punkcie na ekranie

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

class Punkt {

protected:

	int x;
	int y;
	int z;
	string nazwa;

public:

	Punkt() {

		x = 0;
		y = 0;
		z = 0;
		nazwa = ' ';
		// cout << "konstruuje"; <- sprawdzenie wywolania konstruktora domyslnego w klasie dziedziczacej

	}

	Punkt(int x1, int y1, int z1, string nazwa1) {

		x = x1;
		y = y1;
		z = z1;
		nazwa = nazwa1;

	}

	void set_x(int x1) {x = x1;}
	void set_y(int y1) {y = y1;}
	void set_nazwa(string nazwa1) {nazwa = nazwa1;}

	int get_x() {return x;}
	int get_y() {return y;}
	int get_z() {return z;}
	string get_nazwa() {return nazwa;}

	void wypisz() {

		cout << nazwa << ' ' << x << ' ' << y << ' ' << z << endl;

	}

	double odleglosc() {

		double x1 = (double)x;
		double y1 = (double)y;
		double z1 = (double)z;

		double odleglosc = sqrt(x1*x1+y1*y1+z1*z1); 
		return odleglosc;

	}

};

class KolorowyPunkt : public Punkt {

	string kolor;

public:

	KolorowyPunkt() {		// konstruktor domyslny klasy Punkt wywola sie automatycznie

		kolor = "transparent";
	}

	KolorowyPunkt(int x1, int y1, int z1, string nazwa1, string kolor1): Punkt(x1, y1, z1, nazwa1) {

		kolor = kolor1;

	}

	void set_kolor(string kolor1) {kolor = kolor1;}

	string get_kolor() {return kolor;}

	void wypiszKol() {

		wypisz();
		cout << kolor << endl;

	}

};



int main() {

	KolorowyPunkt kolorowyPunkt = KolorowyPunkt(32,23,31,"kolorek","czarny");

	// kolorowyPunkt.wypiszKol();
	cout << kolorowyPunkt.get_x() << endl;
	cout << kolorowyPunkt.odleglosc() << endl;

	system("pause");
	return 0;
}
