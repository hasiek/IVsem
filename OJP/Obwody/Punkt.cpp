#include "Punkt.h"

Punkt::Punkt()
{
	x = 0.0;
	y = 0.0;
}

Punkt::Punkt(float x, float y) {

	this -> x = x;
	this -> y = y;
}

float Punkt::get_x() {

	return x;

}

void Punkt::set_x(float x) {

	this -> x = x;

}

float Punkt::get_y() {

	return y;

}

void Punkt::set_y(float y) {

	this -> y = y;

}

Punkt::~Punkt()
{
}
