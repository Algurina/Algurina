#include <iostream>

using namespace std;

int main()
{
	int long long a;
	int i(0);
	cout << "a = ";
	cin >> a;
	while (a > 0)
	{
		a /= 10;
		i++;
	}
	system("cls");
	cout << "Otvet: " << i << endl;
	system("pause");
	return 0;
}