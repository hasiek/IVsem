// suma, iloczyn, wyznacznik, transpozycja

#include <iostream>

using namespace std;

int main() {
	
	int macierz1[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
	int macierz2[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
	int size11 = 0;
	int size12 = 0;
	int size21 = 0;
	int size22 = 0;
	int wynik[3][3];
	
	cin >> size11;
	cin >> size12;
	cin >> size21;
	cin >> size22;
	
	// dodawanie
	
	if (size11 != size21 || size22 != size12) cout << "Dodawanie niemozliwe.\n";
	else {
		
		for (int i = 0; i < size11; i++) {
			
			for (int j = 0; j < size22; j++) {
				
				wynik[i][j] = macierz1[i][j] + macierz2[i][j];
				cout << wynik[i][j] << ' ';
			
			}
			
			cout << endl;
			
		}

	}
	
	// mnożenie
	
	wynik = {{0,0,0},{0,0,0},{0,0,0}};
	
	if (size11 != size22 || size12 != size21) cout << "Nie mozna wykonac mnozenia.\n"
	else {
		
		for (int i = 0; i < size11; i++) {
			
			for (int j = 0; j < size12; j++) {
				
				
				
			}
			
			cout << endl;
			
		}
		
	}
	
}
