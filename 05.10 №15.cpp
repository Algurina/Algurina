#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter number" << endl;
	cin >> n;
	int i, result;
	while (n < 1)
	{
		cout << "Enter a positive number" << endl;
		cin >> n;
	}
	if (n == 1)
	{
		cout << "The number 1 is neither simple or compound" << endl;
		system("pause");
		return 0;
	}
	for (i = 2, result = 0; i < n; i++)
		if (!(n % i))
			result = 1;
	if (!result)
		cout << "The number " << n << " is simple" << endl;
	else
		cout << "The number " << n << " is not simple" << endl;
	system("pause");
	return 0;
}