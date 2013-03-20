#include <iostream>
#include <cstdlib>

using namespace std;

class CBall;

class CBramka1;

class CBramka2 {

	int x;
	int y;
	int bok;

public:

	void set_x(int x1) {x = x1;}
	void set_y(int y1) {y = y1;}
	void set_bok(int bok1) {bok = bok1;}
	int get_x() {return x;}
	int get_y() {return y;}
	int get_bok() {return bok;}
	friend void judge(CBramka1 bramka1, CBramka2 bramka2, CBall ball);

};

class CBramka1 {

	int x;
	int y;
	int bok;

public:

	void set_x(int x1) {x = x1;}
	void set_y(int y1) {y = y1;}
	void set_bok(int bok1) {bok = bok1;}
	int get_x() {return x;}
	int get_y() {return y;}
	int get_bok() {return bok;}
	friend void judge(CBramka1 bramka1, CBramka2 bramka2, CBall ball);

};

class CBall {

	int x;
	int y;

public:

	void set_x(int x1) {x = x1;}
	void set_y(int y1) {y = y1;}
	int get_x() {return x;}
	int get_y() {return y;}
	friend void judge(CBramka1 bramka1, CBramka2 bramka2, CBall ball);
};

void judge(CBramka1 bramka1, CBramka2 bramka2, CBall ball) {

	if ((ball.x >= bramka1.x) && (ball.x <= (bramka1.x + bramka1.bok)) && (ball.y >= bramka1.y) (ball.y <= bramka1.y + bramka1.bok)) {


	}

}

int main() {


		
	system("pause");
	return 0;
}