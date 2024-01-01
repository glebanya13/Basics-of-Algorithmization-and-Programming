#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int x, y, z, a, b, minone, mintwo;

    cout << "Введите x = "; cin >> x;
    cout << "Введите y = "; cin >> y;
    cout << "Введите z = "; cin >> z;

    a = (x + y + z);
    b = x * y * z;

    if (a > b) {
        minone = b;
    }
    else {
        minone = a;
    }

    if (x > y) {
        mintwo = y;
        if (z > mintwo) {
            mintwo = y;
        }
        else {
            mintwo = z;
        }
    }
    else {
        mintwo = x;
        if (z > mintwo) {
            mintwo = x;
        }
        else {
            mintwo = z;
        }
    }

    cout << "Ответ: " << minone * mintwo << endl;

    return 0;
}