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
		cout << "������� ����� �������: ";
		cin >> zadanie;
		switch (zadanie)
		{
		case 1:
		{
			system("cls");
			cout << "������� 1." << endl;
			cout << "�������� ���������, ������� � ������� ����� A(N,M) ������� ��� ��������, ����������� �� ���������� �������� �������� ����� B. ���������� ����� ����� ��������� � �������� �� � ������ C." << endl;
			cout << "�������:" << endl;
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
			cout << "������� �����: ";
			int B;
			cin >> B;
			cout << "����������� �� ���������� �������� �������� �����: ";
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
			cout << endl << "�� ���-��: " << k << endl;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "������� 2." << endl;
			cout << "���� ������������� ������� ������� 8x5. ����������: " << endl;
			cout << " a. ����� ���� ��������� ������� ������� �������;" << endl;
			cout << " b. ����� ���� ��������� 3-� ������ �������." << endl;
			cout << "�������:" << endl;
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
			cout << "������� 3." << endl;
			cout << "���� ������������� ������������� ������� ������� MxN. ������������ ���������� ������, ��������� �� ���������, ������� � ��������� [1,10]. ����� ������������ ��������� ����������� ����������� �������." << endl;
			cout << "�������:" << endl;
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
			cout << "���������� ������: ";
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
			cout << endl << "������������ = " << proizv << endl;
			break;
		}
		case 4:
		{
			system("cls");
			cout << "������� 4." << endl;
			cout << "���� ������������� ���������� �������. ������� ������� (������� ��� �����), ��� ����������� ���������� ���������, ������� ����� ��������." << endl;
			cout << "�������:" << endl;
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
			cout << "� " << imin << " ������� (" << min << " ������� ��������)" << endl;
			break;
		}
		case 5:
		{
			system("cls");
			cout << "������� 5." << endl;
			cout << "���� ������������� ���������� �������. ����� ����� ��������� �������, ������� ���� ������� ���������." << endl;
			cout << "�������:" << endl;
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
			cout << "����� ���� ������� ���������: ";
			for (int i = 0; i < 4; i++)
			{
				for (int j = jj + 1; j < 5; j++)
				{
					cout << a[i][j] << " ";
					sum += a[i][j];
				}
				jj++;
			}
			cout << endl << "�� ����� = " << sum << endl;
			break;
		}
		default:
			cout << "�������� ����� �������." << endl;
			break;
		}
	} while (zadanie > 0);
}