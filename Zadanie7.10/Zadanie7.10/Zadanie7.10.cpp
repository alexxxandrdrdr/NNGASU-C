
// Zadanie7.10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale>

int main()
{
    const int collum = 5, rows = 5;
    int r, c;
    int** matrix;
    setlocale(LC_ALL, "Russian");
    printf("Размер матрицы: 5*5 ");
    printf("\n");
    //выделение памяти
    matrix = (int**)malloc(sizeof(*matrix) * collum);
    for (int i = 0; i < collum; i++)
    {
        matrix[i] = (int*)malloc(sizeof(**matrix) * rows);
    }
    //int matrix[rows][collum];matrix[r * collum + c];
    //заполнение
    for (r = 0; r < rows; r++) {
        for (c = 0; c < collum; c++) {
            matrix[r][c] = rand() % 9999;
        }
    }
    printf("matrix[%d][%d]=", collum, rows);
    printf("\n");
    //вывод массива
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < collum; c++) {

            printf("%5d\t%s ", matrix[r][c], (r == rows) ? "\n" : "");
        }
        printf("\n");
    }
    //подсчет суммы главной диагонали
    int sum = 0;
    for (int r = 0; r < 5; r++)
    {
        sum+= matrix[r][r]; 
    }
   printf("Сумма главной диагонали равна: %d\n", sum);
   //подсчет суммы обратной диагонали
   int sumobr=0;
   for (int c = 4; c > -1; c--)
   {
       for (int r = 0; r <5; r++)
       {
           if (c+r ==4)
           sumobr += matrix[c][r];
       }
   }
   printf("Сумма обратной диагонали равна: %d", sumobr);
    free(matrix);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
