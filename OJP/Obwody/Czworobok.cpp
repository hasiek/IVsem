#include "Czworobok.h"


Czworobok::Czworobok()
{
	x3 = 0.0;
	y3 = 0.0;
}

Czworobok::Czworobok(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3): Trojkat(x,y, x1, y1, x2, y2) {

	this -> x3 = x3;
	this -> y3 = y3;

}

float Czworobok::obwod() {

	Trojkat trojkat(x, y, x1, y1, x2, y2);
	Odcinek bok_ktory_zniknal(x, y, x2, y2);
	Odcinek odcinek1(x2, y2, x3, y3);
	Odcinek odcinek2(x3, y3, x, y);
	float obwod = 0.0;

	obwod += trojkat.obwod();
	obwod += odcinek1.dlugosc() + odcinek2.dlugosc();
	obwod -= bok_ktory_zniknal.dlugosc();

	return obwod;
}

Czworobok::~Czworobok()
{
}
