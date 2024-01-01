#include <iostream>
#include <ctime>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	srand(time(NULL)); // Инициализация генератора случайных чисел
	int n;
	int rmx = 100;
	int rmn = -100;
	const int SIZE = 1000;
	int arr[SIZE] = {};
	cout << "Размер массива: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		// это разыменование указателя, что приводит к значению, хранящемуся в i-м элементе массива
		*(arr + (i)) = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << "A[" << i << "]" << "\t" << arr[i] << endl;
	}
	cout << " " << endl;
	cout << "Массив после изменения: ";
	for (int i = 0; i < n; i++)
	{
		// это разыменованный указатель на текущий элемент массива
		if (*(arr + (i)) > 0)
		{
			cout << *(arr + (i)) << " ";
		}
	}
	for (int j = 0; j < n; j++)
	{
		// это разыменованный указатель на текущий элемент массива
		if (*(arr + (j)) < 0)
		{
			cout << *(arr + (j)) << " ";
		}
	}
}