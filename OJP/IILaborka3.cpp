#include <iostream>
#include <cstdlib>

using namespace std;

class CRectangle;

class CTriangle {

	int length, height;
public:
	void set_length(int dl) {

		length = dl;

	}
	void set_height(int wys) {

		height = wys;

	}
	friend CTriangle copyIf (CRectangle example, CTriangle anExample, bool side) {

		// zamiana

	}

};

class CRectangle {

	int width, height;
public:
	int get_width() {return width;}
	int get_height() {return height;}
	void set_width(int a) {width = a;}
	void set_heigth(int b) {width = b;}
	friend CTriangle copyIf (CRectangle example, CTriangle anExample, bool side) {

		// zamiana

	}
};


int main() {

	// zawartosc maina

	system("pause");
	return 0;
}