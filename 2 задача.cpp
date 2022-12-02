//Дана матрица размера M × N. Для каждой строки матрицы с нечетным номером (1, 3, …) найти среднее арифметическое ее элементов.
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int n, m, Mass[20][20] = {};
    cout << "Введите количество строк: ";
    cin >> m;
    cout << "Введите количество столбцов: ";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        float aver = 0;
        for (int j = 0; j < n; j++)
        {
            *(*(Mass + i) + j) = rand() % 20;
            aver += *(*(Mass + i) + j);
            cout << " " << *(*(Mass + i) + j);
        }
        if (i % 2 == 0) cout << " Среднее арифметическое = " << aver / n;
        cout << endl;
    }
}