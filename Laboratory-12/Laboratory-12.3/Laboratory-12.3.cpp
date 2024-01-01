#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int k, n;
    const int max = 1000;
    char s[max], s1[max];
    char* p = s;
    char* p1 = s1;
    cout << "Ввод строки" << endl;
    cin.getline(s, max);
    cout << "Ввод k" << endl;
    cin >> k;
    cout << "Ввод n" << endl;
    cin >> n;
    p += n;
    for (int i = n; i < n + k; ++i)
    {
        *p1 = *p;
        p1++;
        p++;
    }
    cout << "Вывод искомой подстроки" << endl;
    p1 = s1;
    for (int j = 0; j < k; ++j)
    {
        cout << *p1;
        ++p1;
    }

}