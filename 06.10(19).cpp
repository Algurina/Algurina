#include <iostream>

using namespace std;

int main()
{
	int n = 100, n1 = n;
	int m;
	for (; n<1000; n++)
	{
		n1 = n;
		int o = 0;

		while (n1>0)
		{
			m = n1 % 10;
			if (m != 0 && n%m == 0)
			{
				o++;
				n1 = n1 / 10;
			}
			else
				n1 = n1 / 10;
			if (o == 3)
				cout << n << " " << endl;
			else
				continue;
		}
	}
	system("pause");
	return 0;
}