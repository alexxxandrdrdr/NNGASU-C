﻿// Zadanie7.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <conio.h>
#include <locale>
#include <stdlib.h>
#define HB 5// размер массива
int main() {
	setlocale(LC_ALL, "Russian");
	int a[HB];// массив
	int i;// индекс массива
	printf("Генерация элементов массива\n");
	printf("-> ");
	srand(5);
	for (i = 0; i < HB; i++)
		a[i] = rand() % 99;
	for (i = 0; i < HB; i++)
	{
		printf("-> ");
		printf(" %d\n", a[i]);
	}
	//поиск максимального члена массива
	int min = a[0];
	int max = a[0];
	for (int i = 0; i < HB; ++i)
	{

		if (a[i] > max)
		{
			max = a[i];

		}
	}
	printf("Максимальное значение: ");
	printf(" %d\n", max);
	//поиск минимального члена массива
	for (int i = 0; i < HB; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];

		}
	}
	
	printf("Минимальное значение: ");
	printf(" %d\n", min);
	
	int summ=0;
	int aver;
	//суммирование членов массива
	for
		(i = 0; i < HB; i++) {
		summ += a[i];
	}
	//поиск среднего значения без учета максимального и минимального элемента
	aver = summ;
	aver -= max;
	aver -= min;
	aver = aver / (HB - 2);
	printf("Сумма: ");
	printf(" %d\n", summ );
	printf("Среднее: ");
	printf(" %d\n", aver);
	printf("\nДля завершения работы программы нажмите <Enter>");
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