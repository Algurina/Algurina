#include <iostream>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");	// �����������

	const int MAX = 10; //������ �������
	char str[MAX],str1[MAX]; //������
		
	cout << "\n������� �����: " ; //�������� ������ ��
	cin >> str;
	int len = strlen(str); //����� ����� ������
	
		for (int j = 0; j <len; j++) //��������������� �����
		
	{
			str1[j] = str[len - j - 1]; 
	}
	cout << "������������ �����: "; //� ������� ���
	cout << str1 << endl;
	
	system("pause");
	return 0;
}








