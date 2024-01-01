#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");

	double y[] = { 3, -2, 0.9, 0.5, 1 }, p = y[0], q, proizv = 1;
	for (int i = 0; i < 5; i++)
	{
		if (y[i] < p)
			p = y[i];
	}
	for (int i = 0; i < 5; i++)
	{
		proizv *= y[i] - 5;
	}

	q = proizv + p;

	cout << "Минимальное значение p = " << p << endl;
	cout << "q = " << q << endl;

	return 0;
}