#include "Ball.h"


CBall::CBall() {

	x = 0;
	y = 0;

};

void CBall::set_x(int x1) {x = x1;};
void CBall::set_y(int y1) {y = y1;};

int CBall::get_x() {return x;};
int  CBall::get_y() {return y;};


CBall::~CBall() {};
