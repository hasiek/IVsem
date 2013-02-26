#include <iostream>
#include <string>

using namespace std;

struct Adres {
	
	private: string ulica;
	private: int nr_domu;
	
	public: void set_ulica(string nazwa) {
		
		ulica = nazwa;
		
	};
	
	public: string get_ulica() {
		
		return ulica;
		
	};
	
	public: void set_numer(int numer) {
		
		nr_domu = numer;
		
	};
	
	public: int get_numer() {
		
		return nr_domu;
		
	};
	
};

struct Osoba {
	
	private: string imie;
	private: int wiek;
	private: struct Adres mieszkanie;
	
	public: void set_imie(string name) {
		
		imie = name;
		
	};
	
	public: void set_wiek (int age) {
		
		wiek = age;
		
	};
	
	public: void set_mieszkanie (string nazwa, int numer) {
		
		mieszkanie.set_ulica(nazwa);
		mieszkanie.set_numer(numer);
		
	};
	
	public: string get_imie() {
		
		return imie;
		
	};
	
	public: int get_wiek() {
		
		return wiek;
		
	};
	
	public: struct Adres get_mieszkanie() {
		
		return mieszkanie;
		
	};

};

int main() {
	
	struct Adres adres;
	adres.set_ulica("Samborowny");
	adres.set_numer(5);
	
	struct Osoba ja;
	ja.set_imie("Kasia");
	ja.set_wiek(21);
	ja.set_mieszkanie("Samborowny",5);
	
	cout << ja.get_imie() << endl << ja.get_wiek() << endl << ja.get_mieszkanie().get_ulica() << endl << ja.get_mieszkanie().get_numer();
	
};
