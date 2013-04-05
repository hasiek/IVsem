#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

double function(double x);

int main() {

	double xl = 0.5;
	double xr = 2.0;
	double xi;
	double xi1 = 1;
	double xi2;
	int iterations1 = 1, iterations2 = 1;

	xi = (xl * function(xr) - xr* function(xl))/(function(xr) - function(xl));

	while (fabs((xi1 - xi)/xi1) > 0.00000001) {

		xi = xi1;
		if (function(xi) * function(xr) < 0) xl = xi;
		else xr = xi;
		xi1 = (xl * function(xr) - xr* function(xl))/(function(xr) - function(xl));
		iterations1++;

	}

	cout << "False position: " << xi << " Number of iterations: " << iterations1 << endl;

	xl = 0.5;
	xr = 2.0;
	xi = 0;
	// xi1 = 1;

	xi2 = xr;
	xi = xl;
	xi1 = xi - ((function(xi) * (xi - xi2))/(function(xi) - function(xi2)));

	while (fabs((xi1 - xi)/xi1) > 0.00000001) {

		xi2 = xi;
		xi = xi1;
		xi1 = xi - ((function(xi) * (xi - xi2))/(function(xi) - function(xi2)));
		iterations2++;
	}

	cout << "Secant method: " << xi << " Number of iterations: " << iterations2 << endl;


	system("pause");
	return 0;
}

double function(double x) {

	// return cos(x) - x;
	return sin(x) - (x/2);

};