#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string s;
    char c;

    cout << "Введите заданное предложение: ";
    getline(cin, s);

    cout << "Введите символ, который нужно удалить: ";
    cin >> c;

    for (auto it = s.begin(); it != s.end(); ) {
        if (*it == c) {
            it = s.erase(it);
        }
        else {
            ++it;
        }
    }

    cout << "Строка после изменений: " << s;

    return 0;
}
