#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main() {
	
	double a = 0, b = 0, c = 0;
	double delta = 0;
	double result1 = 0;
	double result2 = 0;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	if (a != 0.0) {
		
		delta = (pow(b,2.0) - 4*a*c);
		
		if (delta > 0) {
			
			result1 = ((0-b) - sqrt(delta))/(2*a);
			if (delta != 0) {
				
				result2 = ((0-b) + sqrt(delta))/(2*a);
				cout << result1 << " " << result2 << '.';
				
			}
			else cout << result1;
			
		}
		
		else {
			
			complex<double> result3((0.0-b)/(2*a),sqrt(0 - delta)/(2*a));
			complex<double> result4((0.0-b)/(2*a),0 - (sqrt(0 - delta)/(2*a)));
			
			cout << result3.real() << " + " << result3.imag() << 'i' << ' ' << result4.real() << " + " << result4.imag() << 'i' << '.';
			
		}
	}
	
	else cout << "Rownanie nie jest kwadratowe.";
	
}
