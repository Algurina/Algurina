#include <iostream>

using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter coeff." << endl;
	cout << "a: ";
	cin >> a;
	if (a == 0)
	{
		cout << "Input error!" << endl;
		system("pause");
		return 0;
	}
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	system("cls");
	if (a>1)
	{
		cout << a << "*x ^ 2 ";
	}
	else if (a == 1)
	{
		cout << "x ^ 2 ";
	}
	else
		if (a == -1)
		{
			cout << "-x ^ 2 ";
		}
	if (b < 0)
	{
		cout << b << "*x ";
	}
	else
		if (b == 0)
		{
			cout << " ";
		}
		else
			if (b> 0)
			{
				cout << "+" << b << "*x ";
			}
	if (c> 0)
	{
		cout << "+" << c << "= 0" << endl;
	}
	else
		if (c == 0)
		{
			cout << " =0" << endl;;
		}
		else
			if (c < 0)
			{
				cout << c << "= 0" << endl;;
			}
	system("pause");
	system("cls");
	double d = b * b - 4 * a * c;
	if (d < 0)
	{
		cout << "No real roots!" << endl;
		system("pause");
		return 0;
	}
	if (d == 0)
	{
		cout << "x1 = x2 = " << -b / 2 / a << endl;
		system("pause");
		return 0;
	}
	if (d > 0)
	{
		cout << "x1 = " << (-b + sqrt(d)) / 2 / a << endl;
		cout << "x2 = " << (-b - sqrt(d)) / 2 / a << endl;
	}
	system("pause");
	return 0;
}