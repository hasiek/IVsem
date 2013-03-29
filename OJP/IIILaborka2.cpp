// drzewo genealogiczne - trzy pokolenia, dziadkowie, rodzice, dzieci, klasa nadrzedna - rod (nazwisko, wielkosc rodu), funkcja zaprzyjazniona sprawdzajaca nazwisko osoby do rodu wchodzacej (klasa Obcy)

#include <iostream>
#include <string>

using namespace std;

class Rodzina {

protected:

	string nazwisko;
	int wielkosc;

public:

	Rodzina() {

		nazwisko = ' ';
		wielkosc = 0;

	}

	Rodzina(string nazwisko1, int wielkosc1) {

		nazwisko = nazwisko1;
		wielkosc = wielkosc1;

	}

	void set_nazwisko(string nazwisko1) {nazwisko = nazwisko1;}
	void set_wielkosc(int wielkosc1) {wielkosc = wielkosc1;}

	string get_nazwisko() {return nazwisko;}
	int get_wielkosc() {return wielkosc;}

};


int main() {


	return 0;
}