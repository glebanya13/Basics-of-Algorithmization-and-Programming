#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int rows, cols;
    cout << "Введите количество строк матрицы: ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы: ";
    cin >> cols;
    int mas[100][100];
    int i, j, max_count;
    int max_i = 0, max_j = 0;
    srand(time(NULL));
    cout << "Какое максимальное значение элемента может быть у матрицы? ";
    cin >> max_count;
    cout << "Матрица: " << endl;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            mas[i][j] = rand() % max_count;
            cout << mas[i][j] << "\t";
        }
        cout << "\n";
    }
    int max = mas[0][0];
    for (int i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            if (mas[i][j] > max)
            {
                max = mas[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    cout << "Наибольший элемент матрицы: " << max << endl;
    cout << "Он находится на пересечении " << max_i + 1 << " строки и " << max_j + 1 << " столбца" << endl;
    return 0;
}
