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
	friend int judge(CBramka1 bramka1, CBramka2 bramka2, CBall ball);

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
	friend int judge(CBramka1 bramka1, CBramka2 bramka2, CBall ball);

};

class CBall {

	int x;
	int y;

public:

	void set_x(int x1) {x = x1;}
	void set_y(int y1) {y = y1;}
	int get_x() {return x;}
	int get_y() {return y;}
	friend int judge(CBramka1 bramka1, CBramka2 bramka2, CBall ball);
};

int judge(CBramka1 bramka1, CBramka2 bramka2, CBall ball) {
	
	if ((ball.get_x() >= bramka1.get_x()) && (ball.get_x() <= (bramka1.get_x() + bramka1.get_bok())) && (ball.get_y() >= bramka1.get_y()) (ball.get_y() <= bramka1.get_y() + bramka1.get_bok())) return 1;
	else if ((ball.x >= bramka2.x) && (ball.x <= (bramka2.x + bramka2.bok)) && (ball.y >= bramka2.y) (ball.y <= bramka2.y + bramka2.bok)) return 2;
	else return 0;

}

int main() {

	CBramka1 bramka1 = new CBramka1(0,0,15);
	
		
	// system("pause");
	return 0;
}
