#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    const int N = 100;
    int sz, A[N];

    cout << "Введите размер массива: ";
    cin >> sz;

    if (sz > 100) {
        cout << "Введены некорректные данные" << endl;
    }
    else {
        for (int i = 0; i < sz; ++i) {
            cout << "Введите значение элемента " << i << ": ";
            cin >> A[i];
        }

        cout << "Исходный массив:" << endl;
        for (int counter = 0; counter < sz; counter++) {
            cout << "\t" << A[counter];
        }

        int newSize = 1;
        for (int i = 0; i < sz; i++) {
            if (i % 3 != 0) {
                A[newSize] = A[i];
                newSize++;
            }
        }
        sz = newSize;

        cout << endl << "Массив после удаления элементов, индексы которых кратны 3:" << endl;
        for (int counter = 0; counter < sz; counter++) {
            cout << "\t" << A[counter];
        }

        for (int i = 0; i < sz; i++) {
            if (A[i] < 0) {
                sz++;
                for (int j = sz - 1; j > i + 1; j--) {
                    A[j] = A[j - 1];
                }
                A[i + 1] = 10;
            }
        }

        cout << endl << "Массив после вставки 10 после отрицательных элементов:" << endl;
        for (int counter = 0; counter < sz; counter++) {
            cout << "\t" << A[counter];
        }
    }

    return 0;
}