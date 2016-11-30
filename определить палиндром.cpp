#include <iostream>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");	// локализация

	const int MAX = 10; //размер массива
	char str[MAX], str1[MAX]; //строка

	cout << "\nВведите слово: "; //получить строку от
	cin >> str;
	int len = strlen(str); //найти длину строки

	for (int j = 0; j < len; j++) //перевораачиваем буквы

	{
		str1[j] = str[len - j - 1];
	}
	cout << "Перевернутое слово: "; //и вывести его
	cout << str1 << endl;
	int i = 0;
	for (int j = 0; j < len; j++) //перевораачиваем буквы

	{
		if (str1[j] == str[j])
			i++;
	}
	
	if (i == len)
		cout << "Палиндром" << endl;
	else
	{
		cout << "Не палиндром" << endl;
	}

	system("pause");
	return 0;
}