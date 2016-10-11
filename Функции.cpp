#include <iostream>

using namespace std;

int main()
{
	cout << "Enter 1 - 1 oblast'" << endl;
	cout << "Enter 2 - 2 oblast'" << endl;
	cout << "Enter 3 - 3 oblast'" << endl;
	int op;
	cin >> op;
	double x, y;
	cout << " x :";
	cin >> x;
	cout << " y :";
	cin >> y;
	bool condition;
	switch (op)
	{
	case 1:
		condition = ((x - 1)*(x - 1) + y*y <= 1 && y >= -0, 5 && y <= x);
		break;
	case 2:
		condition = (x >= -1 && x <= 0 && y >= -1 && y <= 0);
		break;
	case 3:
		condition = (y <= (x + 1) && y >= (-x - 1) && (x*x + y*y) <= 1);
		break;
	default:
		cout << "Input erorr!" << endl;
		break;
		system("pause");
		return 0;
	}
	if (condition)
		cout << "Belong" << endl;
	system("pause");
	return 0;
}