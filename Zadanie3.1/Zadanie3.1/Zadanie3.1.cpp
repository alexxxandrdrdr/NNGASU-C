// Zadanie3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>// для scanf и printf
#include <string.h>
#include <stdlib.h>// для exit
#include <locale> //подключаем библиотеку локализации


int main(void)
{
    setlocale(LC_ALL, "Russian");          //указываем на необходимость использовать русский язык
    int x1, x2;
    printf("Введите делимое : ");
    scanf("%d", &x1);
    printf("Введите делитель: ");
    scanf("%d", &x2);
    if (x2 == 0)                            //Проверка на деление на 0
    {
        printf("Деление на 0 невозможно\n");
        exit(1);
    }
    printf("%d / %d = %f\n", x1, x2, (float)x1 / x2); //вывод и деление
    system("pause");
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
