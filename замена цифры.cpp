#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	while (true)
	{
		cout << "Enter the number" << endl;
		cin >> a;
		b = a;
		short c, k;
		cout << "Enter number that you want change" << endl;
		cin >> c;
		cout << "Enter number on what you want change" << endl;
		cin >> k;
		long long m = -1, answer = 0;
		short o;
		while (b > 0)
		{
			o = b % 10;
			m++;
			if (o != c)
				answer = answer + o*pow(10, m);
			else
				answer = answer + k*pow(10, m);
			b = b / 10;
		}
		cout << answer << endl;
		short ok;
		cout << "If continue press 1, if exit press 0" << endl;
		cin >> ok;
		system("cls");
		if (ok == 0)
			return 0;
	}
}