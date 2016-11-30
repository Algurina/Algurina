#include <iostream>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");	// локализаци€

	const int MAX = 10; //размер массива
	char str[MAX],str1[MAX]; //строка
		
	cout << "\n¬ведите слово: " ; //получить строку от
	cin >> str;
	int len = strlen(str); //найти длину строки
	
		for (int j = 0; j <len; j++) //перевораачиваем буквы
		
	{
			str1[j] = str[len - j - 1]; 
	}
	cout << "ѕеревернутое слово: "; //и вывести его
	cout << str1 << endl;
	
	system("pause");
	return 0;
}








