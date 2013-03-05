#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

long double calculate (long double xl, long double xr);
long double function (long double x);

int main() {

	long double xl = 0.0;
	long double xr = 1.0;
	long double tolerance = 0.00000001;
	long double xm = 1.0;
	int iterations  = 0;

	// f(x) = cosx - x;

	// function has root inside of the interval when the product of values on boundaries is negative

	cout << "Give the values of left and right boundary and the precision." << endl;

	cin >> xl;
	cin >> xr;
	cin >> tolerance;

	if (function(xl) * function(xr) > 0.0) cout << "Function has no root within this interval.\n";
	else {

		while (fabs((xr-xl)/xm) > tolerance) {

			xm = calculate(xl, xr);
			if (function(xl) * function(xm) <= 0.0) xr = xm;
			else if (function(xm) * function(xr) <= 0.0) xl = xm;
			iterations++;

		}

		cout << "Root: " << setprecision(8) << xm << " Iterations: " << iterations << endl;

	}

	system("pause");
	return 0;
}

long double calculate (long double xl, long double xr) {

	long double xm = (xl + xr) / 2.0;
	return xm;

};

long double function (long double x) {

	long double result = cos(x) - x;
	return result;

};