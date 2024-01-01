#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int k, n;
    const int max = 1000;
    char s[max], s1[max];

    cout << "Ввод строки" << endl;
    cin.getline(s, max);

    cout << "Ввод k" << endl;
    cin >> k;

    cout << "Ввод n" << endl;
    cin >> n;

    for (int i = n, j = 0; i < n + k; ++i, ++j) {
        s1[j] = s[i];
    }

    cout << "Вывод искомой подстроки" << endl;

    for (int j = 0; j < k; ++j) {
        cout << s1[j];
    }

    return 0;
}
