#include <iostream>
#include <cstdlib>
using namespace std;

int findFirstNonPositiveColumn(int**& A, int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        bool columnContainsPositive = false;
        for (int i = 0; i < row; i++)
        {
            if (A[i][j] > 0)
            {
                columnContainsPositive = true;
                break;
            }
        }
        if (!columnContainsPositive)
            return j;
    }
    return -1;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int** A, row, col, i, j;
    cout << "Введите число строк матрицы "; cin >> row;
    cout << "Введите число столбцов "; cin >> col;

    A = new int* [row];
    for (int i = 0; i < row; i++)
    {
        A[i] = new int[col];
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Введите A[" << i << "],[" << j << "]= ";
            cin >> A[i][j];
        }
    }

    int nonPositiveCol = findFirstNonPositiveColumn(A, row, col);

    if (nonPositiveCol == -1)
    {
        cout << "Все столбцы содержат хотя бы один положительный элемент." << endl;
    }
    else
    {
        cout << "Не все столбцы содержат хотя бы один положительный элемент." << endl;

        for (int i = 0; i < row; i++)
        {
            if (A[i][nonPositiveCol] < 0)
            {
                A[i][nonPositiveCol] = abs(A[i][nonPositiveCol]);
            }
        }
    }

    cout << "Результирующая матрица:" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << endl;
        for (int j = 0; j < col; j++)
        {
            cout << "A[" << i << "," << j << "] =" << A[i][j] << "\t";
        }
    }

    for (int i = 0; i < row; i++)
    {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}
