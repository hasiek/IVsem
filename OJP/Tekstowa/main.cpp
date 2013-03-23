#include <iostream>

#include "Goal.h"
#include "Ball.h"

#define PITCH 1000
#define PITCHX 0
#define PITCHY 0

using namespace std;

int main() {

	int x;
	int y;

	CGoal goal1 = CGoal(50,50,100);
	CGoal goal2 = CGoal(1,1,100);
	CBall ball = CBall(25,25);

	cout << "Welcome! Let's play some football." << endl;
	cout << "Kick by typing two integers from your keyboard." << endl;

	while (1) {

		cin >> x;
		cin >> y;

		if (x >= -2147483648 && x <= 2147483648 && y >= -2147483648 && y <= 2147483648) {       // numbers from int range
		
			ball.set_x(ball.get_x() + x);
			ball.set_y(ball.get_y() + y);
		
		}
		else cout << "Not funny at all! I said INTEGER." << endl;

	}

	return 0;
}