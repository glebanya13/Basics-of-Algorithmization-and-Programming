#include <iostream>
#include <ctime>
using namespace std;
void massiv();
void matrix();

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int c;
	do
	{
		cout << "Введите" << endl;
		cout << "1-одномерный массив" << endl;
		cout << "2-работа с матрицей" << endl;
		cout << "3-выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1: massiv(); break;
		case 2: matrix(); break;
		case 3: break;
		}
	} while (c != 3);

}
void massiv() {
	const int N = 100;
	int sz;
	int counter = 0;
	int i;
	double n, imax = 0, count = 0, * A;
	float sum = 0, max = 0, c;
	int last, index = 0;

	cout << "Введите число C=:";
	cin >> c;
	cout << "Введите размер массива: ";
	cin >> sz;

	A = new double[sz];

	cout << "Введите элементы массива:" << endl;
	for (i = 0; i < sz; i++) {
		cin >> A[i];
	}

	cout << "Массив A:" << endl;
	for (i = 0; i < sz; i++) {
		cout << A[i] << ' ';
	}

	for (i = 0; i < sz; i++) {
		if (A[i] < c) {
			count++;
		}
	}

	cout << "Количество элементов меньших C: " << count << endl;
	for (i = 0; i < sz; i++)
		if (A[i] > max) {
			max = A[i];
			imax = i;
		}
	cout << "Максимальный элемент: " << max << endl;
	for (i = 0; i < sz; i++) {
		if (A[i] < 0) {
			last = A[i];
			index = i;
		}
	}
	cout << "Позиция последнего элемента меньше С: " << index << endl;
	for (i = index + 1; i < sz; i++) {
		sum += int(A[i]);
	}
	cout << "Сумма элементов расположенных после последнего отрицательного: " << sum << endl;

	free(A);
}
void matrix() {
	setlocale(LC_ALL, "RUS");

	int rows, cols;
	cout << "Введите количество строк: ";
	cin >> rows;
	cout << "Введите количество столбцов: ";
	cin >> cols;

	int** mas = new int* [rows];
	for (int i = 0; i < rows; i++) {
		mas[i] = new int[cols];
	}

	cout << "Введите элементы матрицы:" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> mas[i][j];
		}
	}

	bool allRowsHaveZero = true;
	for (int i = 0; i < rows; i++) {
		bool rowHasZero = false;
		for (int j = 0; j < cols; j++) {
			if (mas[i][j] == 0) {
				rowHasZero = true;
				break;
			}
		}
		if (!rowHasZero) {
			allRowsHaveZero = false;
			break;
		}
	}

	if (!allRowsHaveZero) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (mas[i][j] < 0) {
					mas[i][j] = 0;
				}
			}
		}
	}

	cout << "Матрица после обработки:" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}

	for (int i = 0; i < rows; i++) {
		delete[] mas[i];
	}
	delete[] mas;
}