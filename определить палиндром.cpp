#include <iostream>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");	// ëîêàëèçàöèÿ

	const int MAX = 10; //ðàçìåð ìàññèâà
	char str[MAX]="", str1[MAX]=""; //ñòðîêà

	cout << "\nÂâåäèòå ñëîâî: "; //ïîëó÷èòü ñòðîêó îò
	cin >> str;
	int len = strlen(str); //íàéòè äëèíó ñòðîêè

	for (int j = 0; j < len; j++) //ïåðåâîðàà÷èâàåì áóêâû

	{
		str1[j] = str[len - j - 1];
	}
	cout << "Ïåðåâåðíóòîå ñëîâî: "; //è âûâåñòè åãî
	cout << str1 << endl;
	int i = 0;
	for (int j = 0; j < len; j++) //ïåðåâîðàà÷èâàåì áóêâû

	{
		if (str1[j] == str[j])
			i++;
	}
	
	if (i == len)
		cout << "Ïàëèíäðîì" << endl;
	else
	{
		cout << "Íå ïàëèíäðîì" << endl;
	}

	system("pause");
	return 0;
}
