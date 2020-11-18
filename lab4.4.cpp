// Lab_03_3.cpp
// < Новосільського Сергія >
// Лабораторна робота No 4.4
// Варіант 16

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double y,x, R2, R1, xp, xk, dx;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -R1)
			y = (R1 + pow(R1, 2)) / (R1 + 2);
		else
			if (-R1 < x && x <= 0)
				y = R1 - sqrt(pow(R1, 2) - pow(x, 2));
			else
				if (0 < x && x <= R2)
					y = R2 + sqrt(pow(R2, 2) - pow(x, 2));
				else
					if (R2 < x && x <= 4)
						y = -R1;
					else
						y = -(R1 * x) / 4;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	cin.get();
	return 0;
}