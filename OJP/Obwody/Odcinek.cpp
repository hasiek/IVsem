#include <cmath>
#include "Odcinek.h"

Odcinek::Odcinek()
{
	x1 = 0.0;
	y1 = 0.0;

}

Odcinek::Odcinek(float x, float y, float x1, float y1) : Punkt(x, y) {
	
	this -> x1 = x1;
	this -> y1 = y1;
	
}

float Odcinek::get_x1() {return x1;}
float Odcinek::get_y1() {return y1;}

void Odcinek::set_x1(float x1) {this -> x1 = x1;}
void Odcinek::set_y1(float y1) {this -> y1 = y1;}

float Odcinek::dlugosc() {

	return sqrt(pow((x - x1),2) + pow((y - y1),2));

}

Odcinek::~Odcinek()
{
}
