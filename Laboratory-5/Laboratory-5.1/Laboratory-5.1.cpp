#include <iostream>
using namespace std;

int main()
{
    float z, w, y = 0.4, t = 5e-5, j = 1;
    int a = -1;
    while (j <=2)
    {
        z = sqrt(t * a + y) + 4 * exp(-2 * j);
        w = log(0.4 * y) / ((7 * a) - z);
        cout << "j = " << j << endl;
        cout << "z = " << z << endl;
        cout << "w = " << w << endl;
        j = j + 0.2;
    }
}