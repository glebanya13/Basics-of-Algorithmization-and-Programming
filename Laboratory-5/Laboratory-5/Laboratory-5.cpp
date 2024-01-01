#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    
    float z, w, y = 0.4, t = 5e-5, j;
    int a = -1;
    for (int n = 1; n <= 5; n++)
    {
        cout << "Введите j" << endl;
        cin >> j;

        z = sqrt(t * a + y) + 4 * exp(-2 * j);
        w = log(0.4 * y) / ((7 * a) - z);
        cout << "z = " << z << endl;
        cout << "w = " << w << endl;
        cout << endl;
    }
}