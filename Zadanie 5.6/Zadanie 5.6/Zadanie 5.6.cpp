// Zadanie 5.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h> // для доступа к srand и rand 
#include <time.h>
#include <locale>
#define L 10 // длина последовательности 

int main()
{
    setlocale(LC_ALL, "Russian");
    int r;// случайное число
    int sum;// summa чисел последовательности
    float sred;// среднее арифметическое
    int i, j;// счетчики циклов
    time_t t;// текущее время - для инициализации
    // генератора случайных чисел
    srand((unsigned)time(&t));; // инициализация генератора // случайных чисел
    
    
        // генерируем последовательность 
        printf("\nСлучайные числа: ");
        sum = 0; // не забыть обнулить ! 
        for (j = 1; j <= L; j++)
        {
            r = rand() % 10 + 1; 
            printf("%i ", r); sum += r;
        }
        sred = (float)sum / L; // чтобы не было усечения 
        printf("\nСред.арифм.: %3.2f\n", sred);
    

    
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
