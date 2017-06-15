#include <io.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <conio.h> 
//функция для сортировки по убыванию
int comp2(const void *a, const void *b)
{
	return (*(int*)b - *(int*)a);
}
using namespace std;

int main()
{
	int *a, *b;
	int n, m, i, j, r, max1, men;
	char File1[20] = "Arr.txt";
	char s1[20] = "Begin Array : ";
	char s2[20] = "Itog Array: ";

	/*объявление функции вычисления max элементов массива*/
	int maxelem(int nn, int *mas);
	/*печать файла*/
	int DispFile(char*, char*);
	/*запись информации в новый файл*/
	void SaveToFile(char*);


	while (1)
	{
		cout << "Enter massiv: 1, Read from file: 2  ";
		cin >> men;
		if ((men == 1) || (men == 2)) break;
		cout << "Incorrect!!! Try again!!!" << endl;
	}

	n = 0;
	//вводим данные и записываем в файл
	if (men == 1)
	{
		SaveToFile(File1);
	}
	// считываем данные из файла и выводим на экран
	n = DispFile(File1, s1);

	//Выделение памяти под массив a
	a = new int[n];
	i = 0;

	//считываем данные из файла и записываем в массив a
	ifstream f11(File1);
	while (1)
	{
		f11 >> r;
		if (f11.eof()) break;
		a[i] = r;
		i++;
	}
	f11.close();

	//находим максимальный элемент в массиве a
	max1 = maxelem(n, a);

	//находим позицию элемента, кратного максимальному    
	for (i = 0; i<n; i++)
	{
		if ((a[i] % max1 == 0) && (a[i] != 0)) break;
	}

	//Выделение памяти под вспомогательный массив
	// в данном массиве содержатся элементы после элемента, кратного
	//масимальному 
	//b = new int [n-i+1];
	b = new int[n - i - 1];
	m = n - i - 1;
	// строим массив B
	for (j = i + 1; j<n; j++)
	{
		b[j - i - 1] = a[j];
	}

	// сортируем его по убыванию
	qsort(b, m, sizeof(int), comp2);

	//добавляем в конец файла отсортированный массив
	ofstream f2;
	f2.open(File1, ios::out | ios::app);
	cout << "Array B:" << endl;
	for (j = 0; j<m; j++)
	{
		cout << b[j] << " ";
		f2 << b[j] << endl;
	}
	cout << endl;
	f2.close();
	system("pause");
	n = DispFile(File1, s2);

	delete[] a;  //Освобождаем память
	delete[] b;
	system("pause");
	return 0;
}
int maxelem(int nn, int *mas) {
	/*функция вычисления max элемента*/
	int i, j, maxe;
	maxe = mas[0];
	for (i = 0; i<nn; i++)
		if (maxe<mas[i])
			maxe = mas[i];
	return maxe;
}
int DispFile(char* String, char* String1)
{
	int r, n1;
	n1 = 0;
	ifstream ifile(String);
	cout << String1 << endl;
	while (1)
	{
		ifile >> r;
		if (ifile.eof()) break;
		cout << r << " ";
		n1++;
	}
	cout << endl;
	ifile.close();
	return n1;

}
void SaveToFile(char* String1)
{
	int n, r;
	cout << "Enter count of numbers:";
	cin >> n;
	ofstream fo(String1);
	for (int i = 0; i<n; i++)
	{
		cout << "Enter the number " << i << " : ";
		cin >> r;
		fo << r << endl;
	}
	fo.close();
}
