#include <iostream>
#include <cstdarg>

using namespace std;

void printBinary(unsigned int n)
{
    unsigned int mask = 0x01 << ((sizeof(n) * 8) - 1);

    while ((mask & n) == 0)
        mask >>= 1;

    for (; mask; mask >>= 1)
        cout << ((n & mask) == 0 ? '0' : '1');

    cout << endl;
}

template<typename T, typename... Args>
void printBinary(T first, Args... args)
{
    printBinary(first);
    printBinary(args...);
}

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Введите числа" << endl;

    unsigned int value1, value2, value3, value4, value5, value6;

    cout << "Введите 3 числа" << endl;
    cin >> value1 >> value2 >> value3;

    printBinary(value1, value2, value3);

    cout << "Введите 4 числа" << endl;
    cin >> value1 >> value2 >> value3 >> value4;

    printBinary(value1, value2, value3, value4);

    cout << "Введите 6 чисел" << endl;
    cin >> value1 >> value2 >> value3 >> value4 >> value5 >> value6;

    printBinary(value1, value2, value3, value4, value5, value6);

    return 0;
}
