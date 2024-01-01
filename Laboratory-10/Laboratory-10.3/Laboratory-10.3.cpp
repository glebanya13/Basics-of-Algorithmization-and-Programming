#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");

    int A, position = 4, n, razn;
    char tmp[33];
    cout << "Введите A ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Представление числа в двоичном коде: " << tmp << endl;
    cout << "Введите число битов ";
    cin >> n;
    razn = position - n;
    while (position >= razn)
    {
        // устанавливаются биты числа A в позициях, где в 12 (1100) есть единицы
        A |= 12 << position;
        _itoa_s(A, tmp, 2);
        position--;
    }
    cout << tmp << endl;
}