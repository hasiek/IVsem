#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

long double f (long double x);
long double derivative (long double xi, long double tolerance);

int main() {

	long double x0 = 0.4;
	long double tolerance = 0.00000001;
	long double xi;
	long double xi1;
	int i = 0;

	xi = x0;
	xi1 = xi - (f(xi)/derivative(xi,tolerance));
	i++;

	while (fabs((xi1 - xi)/xi1) > tolerance) {

		xi = xi1;
		xi1 = xi - (f(xi)/derivative(xi,tolerance));
		i++;

	}

	cout << setprecision(8) << xi << ' ' << i << endl;

	system("pause");
	return 0;

}

long double f (long double x) {

	return (6435*pow(x,8) - 12012*pow(x,6) + 6930*pow(x,4) - 1260*pow(x,2) + 35)/128;

};

long double derivative (long double xi, long double tolerance) {

	long double derivative;

	derivative = (6435*8*pow(xi,7) - 12012*6*pow(xi,5) + 6930*4*pow(xi,3) - 1260*2*xi)/128;
	return derivative;

};