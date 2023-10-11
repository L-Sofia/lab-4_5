#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R_1, R_2;

	srand((unsigned)time(NULL));
	for (int i=0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R_1 = "; cin >> R_1;
		cout << "R_2 = "; cin >> R_2;

		if (x * x + y * y <= R_2 * R_2 && x < 0 && y > 0 ||
			x * x + y * y >= R_2 * R_2 &&
			x * x + y * y <= R_1 * R_1 && x > 0 && y < 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - R_1;
		y = 6. * rand() / RAND_MAX - R_1;

		if (x * x + y * y <= R_2 * R_2 && x < 0 && y > 0 ||
			x * x + y * y >= R_2 * R_2 &&
			x * x + y * y <= R_1 * R_1 && x > 0 && y < 0)
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}