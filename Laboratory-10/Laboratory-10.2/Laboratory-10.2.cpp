#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

	int A;
	int A_mask = 07;
	int B;
	char tmp[33];

	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	cout << " " << endl;
	cout << "Число A: " << A << endl;
	_itoa_s(A, tmp, 2);
	cout << "Представление числа в двоичном коде: " << tmp << endl;
	cout << " " << endl;
	cout << "Число B: " << B << endl;
	_itoa_s(B, tmp, 2);
	cout << "Представление числа в двоичном коде: " << tmp << endl;
	// Сдвигает биты переменной A на одну позицию вправо
	A >>= 1;
	// Сохраняются только те биты, которые были вторыми по счету.
	A &= A_mask;
	// Сдвигает биты переменной B на три позиции влево
	B <<= 3;
	// сохраняются биты из A в соответствии с выполненными операциями.
	B |= A;
	cout << " " << endl;
	cout << "Число B = " << B << endl;
	_itoa_s(B, tmp, 2);
	cout << "Представление числа в двоичном коде: " << tmp << endl;
	return 0;
}