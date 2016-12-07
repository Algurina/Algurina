#include <iostream>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");	// ëîêàëèçàöèÿ

	const int MAX = 30; //ðàçìåð ìàññèâà
	char str[MAX]="", str1[MAX]=""; //ñòðîêà

	cout << "\nÂâåäèòå ñòðîêó  : "; //ïîëó÷èòü ñòðîêó îò
	cin >> str;
	cout << "Èòîãîâàÿ ñòðîêà "; //è âûâåñòè åå
	int len = strlen(str); //íàéòè äëèíó ñòðîêè

	for (int j = 0; j < len; j++)
		str1[j] = str[j];
	cout << str1 << endl;
	system("pause");
	return 0;
}
