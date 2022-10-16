// Lab_04_3.cpp
// Мацкули Ангеліни
// Лабораторна робота № 4.3
// Табуляція функції, заданої 
// формулою: функція з параметрами
// Варіант 17


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, x, xp, xk, dx, F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x + 10 < 0 && b != 0)
			F = a * (x * x) - c * x + b;
		else
			if (x + 10 > 0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = x * (-1) / (a - c);

		cout << "|" << setw(5) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}