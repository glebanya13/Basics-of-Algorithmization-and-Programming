#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int N;
    cout << "Введите размерность матрицы N: ";
    cin >> N;

    const int MAX_SIZE = 100;
    int mas[MAX_SIZE][MAX_SIZE];
    int i, j, sumAboveDiagonal = 0, sumBelowDiagonal = 0, maxCount;

    srand(time(NULL));

    cout << "Какое максимальное значение элемента может быть у матрицы? ";
    cin >> maxCount;

    cout << "Матрица:" << endl;

    int* ptr = &mas[0][0];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            *ptr = rand() % maxCount;
            cout << *ptr << "\t";
            ptr++;
        }
        cout << endl;
    }

    ptr = &mas[0][0];
    cout << "\nСумма элементов, которые выше главной диагонали: ";
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            if (i < j) {
                sumAboveDiagonal += *ptr;
            }
            ptr++;
        }
    }
    cout << sumAboveDiagonal << endl;

    ptr = &mas[0][0];
    cout << "\nСумма элементов, которые ниже главной диагонали: ";
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            if (i > j)
                sumBelowDiagonal += *ptr;
            ptr++;
        }
    }
    cout << sumBelowDiagonal << endl;

    return 0;
}
