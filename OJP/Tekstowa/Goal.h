#pragma once

class CGoal {

	int x;
	int y;
	int side;

public:
	CGoal();
	CGoal(int x1, int y1, int side1);

	void set_x(int x1);
	void set_y(int y1);
	void set_side(int side1);

	int get_x();
	int get_y();
	int get_side();

	~CGoal();
};

