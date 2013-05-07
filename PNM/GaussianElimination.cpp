#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	float matrix[5][5];
	float vector[5];
	float beta, ro, x[5];
	float betaj[5], roj[5], xj[5];
	int n = 5;

	matrix[0][0] = 2.0;
	matrix[0][1] = -1;
	matrix[0][2] = 0;
	matrix[0][3] = 0;
	matrix[0][4] = 0;
	// matrix[0][5] = 0.0;
	matrix[1][0] = -1;
	matrix[1][1] = 2;
	matrix[1][2] = -1;
	matrix[1][3] = 0;
	matrix[1][4] = 0;
	matrix[1][5] = 1;
	matrix[2][0] = 0;
	matrix[2][1] = -1;
	matrix[2][2] = 2;
	matrix[2][3] = -1;
	matrix[2][4] = 0;
	// matrix[2][5] = 2;
	matrix[3][0] = 0;
	matrix[3][1] = 0;
	matrix[3][2] = -1;
	matrix[3][3] = 2;
	matrix[3][4] = -1;
	// matrix[3][5] = 3;
	matrix[4][0] = 0;
	matrix[4][1] = 0;
	matrix[4][2] = 0;
	matrix[4][3] = -1;
	matrix[4][4] = 2;
	// matrix[4][5] = 4;

	float r[5] = {0, 1, 2, 3, 4};

	beta = matrix[0][0];
	betaj[0] = beta;
	ro = r[0];
	roj[0] = ro;

	for (int j = 1; j < n; j++) {

		beta = matrix[j][j] - ((matrix[j][j-1] * matrix[j-1][j])/betaj[j-1]);
		betaj[j] = beta;
		roj[j] = r[j] - (matrix[j][j-1]/betaj[j-1]) * roj[j-1];

	}

	x[4] = roj[4]/betaj[4];

	for (int j = 1; j < n; j++) {

		x[4 - j] = (roj[4 - j] - matrix[4 - j][4 - j + 1] * x[4 - j + 1])/betaj[4 - j];

	}

	for (int i = 0; i < 5; i++) cout << x[i] << endl;

	

	system("PAUSE");
	return 0;
}