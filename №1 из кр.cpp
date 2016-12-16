#include <iostream>



using namespace std;
void decode(int[], int, char[]);
bool check(int[], int);

int main()
{
	int n = 10;
	int a[10] = { 15, 22, 26, 9, 13, 29, 24, 28, 28, 27 };
	char str[10] = "";
	if (check(a, n))
	{
		decode(a, n, str);
		cout << str << "+++++" << endl;
	}

	else
		cout << "Error" << endl;
	return 0;
	system("pause");
	return 0;
}
bool check(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i]>29 || a[i] < 0)
		{
			return false;
		}
	}
	return true;
}

void decode(int a[], int n, char str[])
{
	for (int i = 0; i < n; i++)
	{
		switch (a[i])
		{
		case 27:
			str[i] = '!';
			break;
		case 28:
			str[i] = '+';
			break;
		case 29:
			str[i] = ' ';
			break;
		default:
			str[i] = 65 + 26 - a[i];
		}
	}
}
