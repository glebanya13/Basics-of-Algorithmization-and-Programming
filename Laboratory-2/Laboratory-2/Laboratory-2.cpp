﻿#include <iostream>

using namespace std;

int main()
{
    float a = 1.75, b = 4.5 * pow(10, -4),
        y = a * exp(-2*b) - sqrt(1 + a),
        r = log(1 + 20*b) / (1 + a);
    cout << y << '\n' << r;
}