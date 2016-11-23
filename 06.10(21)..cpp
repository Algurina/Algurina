#include <iostream>

using namespace std;

int main()
{
	int n = 100, n1 = n;
	int w, s = 0, c = 0;
	for (; n<1000; n++)
	{
		n1 = n;
		s = 0;
		while (n1 >0)
		{
			w = n1 % 10;
			c = pow(w, 3);
			s = s + c;
			n1 = n1 / 10;
		}
		if (s == n)
			cout << "summ = " << n << endl;
	}
	system("pause");
	return 0;
}