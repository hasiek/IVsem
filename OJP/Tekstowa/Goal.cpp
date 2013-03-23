#include "Goal.h"

CGoal::CGoal(void){

		x = 0;
		y = 0;
		side = 0;
};

CGoal::CGoal(int x1, int y1, int side1) {

		x = x1;
		y = y1;
		side = side1;

};

void CGoal::set_x(int x1) {x = x1;};
void CGoal::set_y(int y1) {y = y1;};
void CGoal::set_side(int side1) {side = side1;};

int CGoal::get_x() {return x;};
int CGoal::get_y() {return y;};
int CGoal::get_side() {return side;};


CGoal::~CGoal(void){};
