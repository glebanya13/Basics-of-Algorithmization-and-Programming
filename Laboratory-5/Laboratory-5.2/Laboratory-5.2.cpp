#include <iostream>
using namespace std;

int main()
{
    double a, t, y = 0.4, z, w;
    for (int j = 0; j < 3; j++)
    {
        cout << "Введите a" << endl;
        cin >> a;
        t = 3;
        do
        {
            z = sqrt(t * a + y) + 4 * exp(-2 * j);
            w = log(0.4 * y) / ((7 * a) - z);
            cout << "z = " << z << endl;
            cout << "w = " << w << endl;
            t = t + 0.2;
        } while (t <= 4);
    }
}