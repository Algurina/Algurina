#include <iostream>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");	// �����������

	const int MAX = 10; //������ �������
	char str[MAX], str1[MAX]; //������

	cout << "\n������� �����: "; //�������� ������ ��
	cin >> str;
	int len = strlen(str); //����� ����� ������

	for (int j = 0; j < len; j++) //��������������� �����

	{
		str1[j] = str[len - j - 1];
	}
	cout << "������������ �����: "; //� ������� ���
	cout << str1 << endl;
	int i = 0;
	for (int j = 0; j < len; j++) //��������������� �����

	{
		if (str1[j] == str[j])
			i++;
	}
	
	if (i == len)
		cout << "���������" << endl;
	else
	{
		cout << "�� ���������" << endl;
	}

	system("pause");
	return 0;
}