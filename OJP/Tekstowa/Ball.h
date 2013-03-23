#pragma once

class CGoal;

class CBall {

	int x;
	int y;

	friend bool judge(CBall ball, CGoal goal1, CGoal goal2);

public:
	
	CBall();
	CBall(int x1, int y1);

	void set_x (int x1);
	void set_y (int y1);

	int get_x();
	int get_y();

	~CBall();
};

