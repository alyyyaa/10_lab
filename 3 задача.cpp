//Дана матрица размера M × N (M — четное число). Поменять местами верхнюю и нижнюю половины матрицы.
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Введите количество строк" << endl;
    cin >> m;
    cout << "Введите количество столбцов" << endl;
    cin >> n;
    cout << endl;
    int** a = new int* [m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 30;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < m / 2; i++)
        for (int j = 0; j < n; j++)
            swap(a[i][j], a[n / 2 + i][j]);

    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}