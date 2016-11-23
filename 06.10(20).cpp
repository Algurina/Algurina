#include <iostream>

using namespace std;

int main()
{
	int n = 100, n1 = n;
	int m, s = 0, o;
	for (; n<1000; n++)
	{
		o = 0;
		n1 = n;
		while (n1>0)
		{
			m = n1 % 10;
			if (m != 0 && m % 2 == 1)
			{
				o++;
				n1 = n1 / 10;
			}
			else
				n1 = n1 / 10;
			if (o == 3)
				s = s + n;
			else
				continue;
		}
	}
	cout << "sum = " << s << endl;
	o = 0;
	while (s > 0)
	{
		m = s % 10;
		if (m % 2 == 0)
			o++;
		s = s / 10;
	}
	cout << "Even numbers : " << o << endl;
	system("pause");
	return 0;
}

