// 1 bisection, 7 secant

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

double function(double x);
double approxDeriv(double xl, double xr);

int main() {

	double xl = 0.5;
	double xr = 3;
	double x0 = xl;
	double x01;
	double x02;
	double error;

	int bisection = 0, sec = 0;
	x0 = xl;
	x02 = xr;

	do {

		if((((x0 - xl)* approxDeriv(x0,x02) - function(x0)) * (((x0 - xr) * approxDeriv(x0,x02)) - function(x0))) <= 0) {

			x01 = x0 - ((function(x0)*(x0 - x02))/(function(x0) - function(x02)));
			sec++;

		}
		else {

			x01 = (xr+xl)/2;
			bisection++;

		}

		if (function(xl)*function(x01) <= 0) xr = x01;
		else xl = x01;
		error = fabs((x01 - x0)/x01);
		x02 = x0;
		x0 = x01;

	} while (error > 0.00000001);

	cout << setprecision(8) << x0 << endl << "Bisection iterations: " << bisection << endl << "Secant iterations: " << sec << endl;

	system("pause");
	return 0;
}

double function(double x) {

	double result = sin(x) - x/2;
	return result;

};

double approxDeriv(double xl, double xr) {

	return (function(xl) - function(xr))/(xl - xr);

};