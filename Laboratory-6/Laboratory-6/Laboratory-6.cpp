#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double b, z, x = -4.4e-3, s = 1.1, j = 4;
	while (j <= 7)
	{
		b = 12 * s - exp(-s / 2) * (x - j);
		if (b < 1, 5)
		{
			z = sqrt(-2 * x * j) + b;
		}
		else
		{
			z = abs(13 * x * j) + b;
		}
		cout << "b = " << b << endl;
		cout << "z = " << z << endl;
		cout << " " << endl;
		j += 0.5;
	}
	return (0);
}