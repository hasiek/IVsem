#pragma once

class CBall {

	int x;
	int y;

public:
	
	CBall();
	CBall(int x1, int y1);

	void set_x (int x1);
	void set_y (int y1);

	int get_x();
	int get_y();

	~CBall();
};

