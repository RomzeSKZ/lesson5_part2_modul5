#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int zadanie;
	do
	{
		cout << "Введите номер задания: ";
		cin >> zadanie;
		switch (zadanie)
		{
		case 1:
		{
			system("cls");
			cout << "Задание 1." << endl;
			cout << "Написать программу, которая в матрице чисел A(N,M) находит все элементы, превышающие по абсолютной величине заданное число B. Подсчитать число таких элементов и записать их в массив C." << endl;
			cout << "Решение:" << endl;
			int a[10][10], C[] = { 0 }, k = 0;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					a[i][j] = -20 + rand() % 40;
					cout << a[i][j] << "  ";
				}
				cout << endl;
			}
			cout << "Введите число: ";
			int B;
			cin >> B;
			cout << "Превышающие по абсолютной величине заданное число: ";
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (abs(a[i][j]) > B)
					{
						C[k] = a[i][j];
						cout << C[k] << " ";
						k++;
					}
				}
			}
			cout << endl << "Их кол-во: " << k << endl;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "Задание 2." << endl;
			cout << "Дана целочисленная матрица размера 8x5. Определить: " << endl;
			cout << " a. сумму всех элементов второго столбца массива;" << endl;
			cout << " b. сумму всех элементов 3-й строки массива." << endl;
			cout << "Решение:" << endl;
			int a[8][5], sum = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					a[i][j] = 10 + rand() % 90;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			for (int i = 0; i < 8; i++)
			{
				sum += a[i][1];
			}
			cout << "a. " << sum << endl;
			sum = 0;
			for (int j = 0; j < 5; j++)
			{
				sum += a[2][j];
			}
			cout << "b. " << sum << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "Задание 3." << endl;
			cout << "Дана целочисленная прямоугольная матрица размера MxN. Сформировать одномерный массив, состоящий из элементов, лежащих в интервале [1,10]. Найти произведение элементов полученного одномерного массива." << endl;
			cout << "Решение:" << endl;
			int a[5][10], b[] = { 0 }, proizv = 1, k = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					a[i][j] = 1 + rand() % 50;
					if (a[i][j] < 10)
						cout << "0" << a[i][j] << " ";
					else
						cout << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << "Полученный массив: ";
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (a[i][j] >= 1 && a[i][j] <= 10)
					{
						b[k] = a[i][j];
						cout << b[k] << " ";
						k++;
					}
				}
			}
			for (int i = 0; i < k; i++)
				proizv *= b[i];
			cout << endl << "Произведение = " << proizv << endl;
			break;
		}
		case 4:
		{
			system("cls");
			cout << "Задание 4." << endl;
			cout << "Дана целочисленная квадратная матрица. Указать столбец (назвать его номер), где минимальное количество элементов, кратных сумме индексов." << endl;
			cout << "Решение:" << endl;
			int a[5][5], imin = 0, k = 0, min = 100, i, j;
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					a[i][j] = 10 + rand() % 90;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			for (i = 0; i < 5; i++)
			{
				k = 0;
				for (j = 0; j < 5; j++)
				{
					if (i != 0 || j != 0)
						if (a[j][i] % (j + i) == 0)
							k++;
				}
				if (k < min)
				{
					min = k;
					imin = i;
				}
			}
			cout << "В " << imin << " столбце (" << min << " кратных значений)" << endl;
			break;
		}
		case 5:
		{
			system("cls");
			cout << "Задание 5." << endl;
			cout << "Дана целочисленная квадратная матрица. Найти сумму элементов матрицы, лежащих выше главной диагонали." << endl;
			cout << "Решение:" << endl;
			int a[5][5], sum = 0, jj = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					a[i][j] = 10 + rand() % 90;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << "Числа выше главной диагонали: ";
			for (int i = 0; i < 4; i++)
			{
				for (int j = jj + 1; j < 5; j++)
				{
					cout << a[i][j] << " ";
					sum += a[i][j];
				}
				jj++;
			}
			cout << endl << "Их сумма = " << sum << endl;
			break;
		}
		default:
			cout << "Неверный номер задания." << endl;
			break;
		}
	} while (zadanie > 0);
}