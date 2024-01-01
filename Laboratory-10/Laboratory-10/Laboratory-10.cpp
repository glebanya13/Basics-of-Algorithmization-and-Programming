#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");

	char tmp[30]; // Объявляем массив символов для хранения двоичного представления числа
	int n, p, A;

	cout << "Введите число" << endl;
	cin >> A;

	// Конвертируем число A в его двоичное представление и выводим
	_itoa_s(A, tmp, 2);

	cout << tmp << endl;
	cout << "Количество битов" << endl;
	cin >> n;

	cout << "Позиция: " << endl;
	cin >> p;

	// Создаем маску maskA, устанавливающую биты в диапазоне от (n + p) до p в 1
	int maskA = 1 << (n + p) | 7;
	// 1 << (n+p) сдвигает бит 1 влево на (n+p) позиций
	// | 7 устанавливает три младших бита маски в 1 
	// Применяем операцию И между A и maskA, затем выводим результат в двоичной форме
	_itoa_s(A & maskA, tmp, 2);

	cout << tmp << endl;
}