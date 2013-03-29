#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

double function(double x);
double derivative(double x);

int main() {

	double xl = 0;
	double xr = 3;
	double x0 = xl;
	double x01;
	double error;

	int bisection = 0, nr = 0;

	do {

		if(((x0 - xl)*derivative(x0) - function(x0)) * ((x0 - xr)*derivative(x0) - function(x0)) <= 0) {

			x01 = x0 - (function(x0)/derivative(x0));
			nr++;

		}
		else {

			x01 = (xr+xl)/2;
			bisection++;

		}

		if (function(xl)*function(x01) <= 0) xr = x01;
		else xl = x01;
		error = fabs((x01 - x0)/x01);
		x0 = x01;

	} while (error > 0.00000001);

	cout << setprecision(8) << x0 << endl << "Bisection iterations: " << bisection << endl << "Newton-Raphson iterations: " << nr << endl;

	system("pause");
	return 0;
}

double function(double x) {

	double result = pow(x,2) - 2*x - 2;
	return result;

};

double derivative(double x) {

	double result = 2*x - 2;
	return result;

};