#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Auto {

	string name;
	int age;

	public:

		Auto() {

			name = ' ';
			age = 0;

		}

		Auto(string nazwa, int wiek) {

			name = nazwa;
			age = wiek;

		} // desktruktor siê nie wywo³a

		void set_name (string nazwa) {

			name = nazwa;

		};

		void set_age(int wiek) {

			age = wiek;

		};

		int get_age() {

			return age;

		};

		string get_name() {

			return name;

		};

		~Auto() {

			cout << "Destruktor\n";

		}

};

int main() {

	Auto auta[3];
	int wiek;
	string nazwa;

	Auto auto1("Opel", 3);
	// auto1 = Auto("Opel", 3);

	cin >> nazwa;
	cin >> wiek;

	Auto auto2(nazwa, wiek);
	auto2 = Auto("Fiat", 2);

	Auto auto3;
	auto3 = Auto("Chevrolet", 1);

	auta[0] = auto1;
	auta[1] = auto2;
	auta[2] = auto3;

	cout << auta[0].get_name() << ' ' << auta[0].get_age() << endl;
	cout << auta[1].get_name() << ' ' << auta[1].get_age() << endl;
	cout << auta[2].get_name() << ' ' << auta[2].get_age() << endl;

	system("pause");
	return 0;
}