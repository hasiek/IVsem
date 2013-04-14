#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Wektor {

protected:

	float a;
	float b;
	float c;

public:

	Wektor() {

		a = 0;
		b = 0;
		c = 0;
	}

	Wektor (float a1, float b1, float c1) {

		a = a1;
		b = b1;
		c = c1;
	}

	~Wektor() {}

};

class Wyswietl {

protected:

	float liczba;

public:

	void pokaz(float liczba) {

		cout << liczba << endl;

	}

};

class Dziedziczaca : public Wektor, public Wyswietl {
	
public:

	Dziedziczaca(float a, float b, float c) : Wektor(a, b, c) {}

	float dlugosc() {

		return sqrt(pow(a,2)+pow(b,2)+pow(c,2));

	}

};


int main() {

	Dziedziczaca wektor = Dziedziczaca(1.0,1.0,1.0);
	wektor.pokaz(wektor.dlugosc());

	system("pause");
	return 0;
}