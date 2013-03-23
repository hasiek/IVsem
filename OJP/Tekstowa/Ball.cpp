#include <iostream>

using namespace std;

#include "Ball.h"
#include "Goal.h"

#define PITCHX 0
#define PITCHY 0
#define PITCHSIDE 1000


CBall::CBall() {

	x = 0;
	y = 0;

};

CBall::CBall(int x1, int y1) {

	x = x1;
	y = y1;

};

void CBall::set_x(int x1) {x = x1;};
void CBall::set_y(int y1) {y = y1;};

int CBall::get_x() {return x;};
int CBall::get_y() {return y;};

bool judge(CBall ball, CGoal goal1, CGoal goal2) {

	int ballx = ball.get_x();
	int bally = ball.get_y();
	int goalx = goal1.get_x();
	int goaly = goal1.get_y();
	int goalside = goal1.get_side();

	bool goal11 = false;
	bool goal22 = false;

	if (!((ballx >= PITCHX) && (ballx <= (PITCHX + PITCHSIDE)) && (bally >= PITCHY) && (bally <= (PITCHY + PITCHSIDE)))) cout << "AUT!" << endl;

	if ((ballx >= goalx) && (ballx <= (goalx + goalside)) && (bally >= goaly) && (bally <= (goaly + goalside))) {

		goal11 = true;
		return goal11;
	
	}
	else {

		goalx = goal2.get_x();
		goaly = goal2.get_y();
		goalside = goal2.get_side();
		if ((ballx >= goalx) && (ballx <= (goalx + goalside)) && (bally >= goaly) && (bally <= (goaly + goalside))) {

			goal22 = true;
			return goal22;
	
		}
		else return false;
	}

};

CBall::~CBall() {};
