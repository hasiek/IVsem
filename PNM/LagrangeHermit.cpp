#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

double f (double x) {

	return exp(x);

}

double derivative (double x) {

	return exp(x);

};

int main() {

	double xT[4] = {-1.0, 0.5, 1.5, 2.0};
	double x, h, p, l_jn, h_jn, h_jn_, l1_jn;
	int n;

	n = 4;
	h = 0.1;
	x = -5.0;

	cout << "Lagrange interpolation:\n";

	do {

		p = 0.0;
		for (int j = 0; j < n; j++) {

			l_jn = 1.0;
			for (int i = 0; i < n; i++) {

				if (i != j) l_jn *= (x - xT[i])/(xT[j] - xT[i]); 

			}

			p += l_jn * f(xT[j]);
		}

		cout << x << ' ' << p << endl;
		x += h;

	} while(x <= 5.0);

	cout << "Hermit interpolation:\n";

	x = -5.0;

	do {

		p = 0.0;
		for (int j = 0; j < n; j++) {

			l_jn = 1.0;
			for (int i = 0; i < n; i++) {

				if (i != j) l_jn *= (x - xT[i])/(xT[j] - xT[i]); 

			}

			l1_jn = 0.0;
			for (int i = 0; i < n; i++) {

				if (i != j) l1_jn += 1/(xT[j] - xT[i]); 

			}

			h_jn = (1 - 2*(x - xT[j])*l1_jn) * pow(l_jn, 2);
			h_jn_ = (x - xT[j]) * pow(l_jn, 2);
			p += h_jn * f(xT[j]) + h_jn_ * derivative(xT[j]);
		}

		cout << x << ' ' << p << endl;
		x += h;
		

	} while (x <= 5.0);


	system ("pause");
	return 0;
}
