#include <iostream>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");	// ëîêàëèçàöèÿ

	const int MAX = 10; //ðàçìåð ìàññèâà
	char str[MAX]="",str1[MAX]=""; //ñòðîêà
		
	cout << "\nÂâåäèòå ñëîâî: " ; //ïîëó÷èòü ñòðîêó îò
	cin >> str;
	int len = strlen(str); //íàéòè äëèíó ñòðîêè
	
		for (int j = 0; j <len; j++) //ïåðåâîðàà÷èâàåì áóêâû
		
	{
			str1[j] = str[len - j - 1]; 
	}
	cout << "Ïåðåâåðíóòîå ñëîâî: "; //è âûâåñòè åãî
	cout << str1 << endl;
	
	system("pause");
	return 0;
}








