#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int q, b;
	cout << "Введите q: "; cin >> q;
	cout << "Введите b: "; cin >> b;
	for (int i = 1; i < q; i++)
	{
		int цифра = i;
		int сумма = 0;
		while (цифра != 0)
		{
			сумма += цифра % 10;
			цифра /= 10;
		}
		if (сумма * сумма == b)
		{
			cout << "Цифра = " << i << endl;
		}

	}
	return (0);
}