#include <iostream>
#include <cstdlib>

using namespace std;

class CRectangle {
	
	int width;
	int height;

public:
	void set_width(int dl) {

		width = dl;

	}
	void set_height(int wys) {

		height = wys;

	}
	int get_width() {

		return width;

	}
	int get_height() {

		return height;

	}

	friend class CTriangle;
	
};

class CTriangle {

	int length, height;

public:

	void set_length(int dl) {

		length = dl;

	}
	void set_height(int wys) {

		height = wys;

	}
	int get_height() {

		return height;

	}
	int get_length() {

		return length;

	}

	void copyIf(CTriangle example, CRectangle anotherExample, bool side) {

		if (side == true) {

			example.height = anotherExample.get_height();
			example.length = anotherExample.get_width();
			
		}
		else if (side == false) {

			anotherExample.set_height(example.height);
			anotherExample.set_width(example.length);
		}

		cout << example.height << ' ' << example.length << ' ' << " <- triangle." << endl;
		cout << anotherExample.get_height() << ' ' << anotherExample.get_width() << " <- rectangle." << endl;
		cout << side << " <- bool given." << endl;

	}

};



int main() {

	CRectangle rectangle;
	rectangle.set_height(23);
	rectangle.set_width(32);

	CTriangle triangle;
	triangle.set_length(45);
	triangle.set_height(54);

	bool side;

	cin >> side;

	triangle.copyIf(triangle, rectangle, side);

	system("pause");
	return 0;
}