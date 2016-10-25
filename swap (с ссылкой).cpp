#include <iostream>

using namespace std;

void Swap(int &a, int &b);

int main()
{
	int x, y;
	cout << "Enter x = ";
	cin >> x; '\n';
	cout << "Enter y = ";
	cin >> y;
	Swap(x, y);
	cout << "x = " << x << endl << "y = " << y << endl;
	system("pause");
	return 0;
}

void Swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}