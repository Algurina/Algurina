#include <iostream>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");	// �����������

	const int MAX = 30; //������ �������
	char str[MAX], str1[MAX]; //������

	cout << "\n������� ������  : "; //�������� ������ ��
	cin >> str;
	cout << "�������� ������ "; //� ������� ��
	int len = strlen(str); //����� ����� ������

	for (int j = 0; j < len; j++)
		str1[j] = str[j];
	cout << str1 << endl;
	system("pause");
	return 0;
}