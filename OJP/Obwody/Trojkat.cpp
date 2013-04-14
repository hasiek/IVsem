#include "Trojkat.h"


Trojkat::Trojkat()
{
	x2 = 0.0;
	y2 = 0.0;

}

Trojkat::Trojkat(float x, float y, float x1, float y1, float x2, float y2) : Odcinek(x, y, x1, y1) {

	this -> x2 = x2;
	this -> y2 = y2;
}

float Trojkat::obwod() {

	Odcinek odcinek(x, y, x1, y1);
	Odcinek odcinek1(x1, y1, x2, y2);
	Odcinek odcinek2(x2, y2, x, y);

	float obwod = 0;

	obwod += odcinek.dlugosc() + odcinek1.dlugosc() + odcinek2.dlugosc();
	return obwod;

}

Trojkat::~Trojkat(void)
{
}
