#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Введите A = "; cin >> a;
    cout << "Введите B = "; cin >> b;
    cout << "Введите C = "; cin >> c;
    cout << "Введите D = "; cin >> d;
    if (a % 2 == 0)
    {
        cout << "Есть чётное";
    } 
    else if (b % 2 == 0)
        {
        cout << "Есть чётное";
        }
        else if (c % 2 == 0)
        {
        cout << "Есть чётное";
        }
        else if (d % 2 == 0)
        {
        cout << "Есть чётное";
        }
    else {
        cout << "Нет чётного";
    }

    return 0;
}