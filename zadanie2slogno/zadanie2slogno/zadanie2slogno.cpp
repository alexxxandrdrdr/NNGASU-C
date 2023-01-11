// zadanie2slogno.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale> //подключаем библиотеку локализации
#include <stdio.h>
#include <locationapi.h>
using namespace std;
int main()
{ /*
    //1.2.10
    printf("Zadanie1\n");
    printf("\nrazmer tipa(int)       = %zu", sizeof(int));
    printf("\nrazmer tipa(float)     = %zu", sizeof(float));
    printf("\nrazmer tipa(double)    = %zu", sizeof(double));
    printf("\nrazmer tipa(char)      = %zu", sizeof(char));
    printf("\nrazmer tipa(167)       = %zu", sizeof(167));
    printf("\nrazmer tipa(3.1415926) = %zu", sizeof(3.1415926));
    printf("\nrazmer tipa('$')       = %zu", sizeof('$'));
    */
    //1.2.20
    printf("Zadanie2\n");
    double a;
   a = 20.25;
   printf("%s \n", a);
    /*
    //1.2.30
    printf("\nZadanie3\n");
    setlocale(LC_ALL, "Russian");
    printf("\"строка в кавычках \" ");

    //1.2.40

    //locate ("stdio.h");
   // printf();
   */
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
