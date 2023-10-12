#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |";
	cout << setw(10) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x + c < 0 && a != 0)
			F = -a * x * x - b;
		else
			if (x + c > 0 && a == 0)
				F = (x - a) / (x - c);
			else
				F = x / c + c / x;

		cout << "|" << setw(5) << setprecision(2) << x;
		cout << " |" << setw(10) << setprecision(3) << F;
		cout << " |" << endl;

		x += dx;
	}

	cout << "---------------------------" << endl;

	return 0;
}