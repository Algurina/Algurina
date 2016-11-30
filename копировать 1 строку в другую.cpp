#include <iostream>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");	// локализаци€

	const int MAX = 30; //размер массива
	char str[MAX], str1[MAX]; //строка

	cout << "\n¬ведите строку  : "; //получить строку от
	cin >> str;
	cout << "»тогова€ строка "; //и вывести ее
	int len = strlen(str); //найти длину строки

	for (int j = 0; j < len; j++)
		str1[j] = str[j];
	cout << str1 << endl;
	system("pause");
	return 0;
}