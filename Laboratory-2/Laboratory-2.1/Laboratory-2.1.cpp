#include <iostream>

using namespace std;

int main()
{
    int n = 2;
    float b = -0.12, x = 1.3 * pow(10, -4),
        z = 1 / (x - 1) + sin(x) - sqrt(n),
        y = (exp(-b) + 1) / 2*z;
    cout << z << '\n' << y;
}