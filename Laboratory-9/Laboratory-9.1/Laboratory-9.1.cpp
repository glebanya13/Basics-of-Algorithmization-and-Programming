#include <iostream>
#include <ctime>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	const int N = 100;
	int i, sz, A[N], el;
	int mn = 0;
	int rmn = 0, rmx = 99;
	int counter = 0;
	int g = 0;
	int k = 3;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand(time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);

	}
	for (int counter = 0; counter < sz; counter++)
	{
		cout << "\t" << A[counter];
	}
	cout << endl << "Элемент с каким индексом вы хотите удалить ? ";
	cin >> el;
	for (i = el; i < sz; i++)
	{
		A[i] = A[i + 1];
	}
	for (int i = 0; i < (sz - 1); i++) {
		if (A[i] % 2 == 0 && A[i] != 0) {
			g++;
		}
	}
	int n = sz + g - 1;
	int arr[N];
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (A[j] % 2 == 0 && A[j] != 0) {
			arr[i] = A[j];
			i++;
			arr[i] = 0;
		}
		else {
			arr[i] = A[j];
		}
		j++;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << " " << endl;
}