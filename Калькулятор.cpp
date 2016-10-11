#include <iostream>

using namespace std;

int main()
{
	cout << "Enter sing operation" << endl;
	cout << "Enter *, if you want to multiply" << endl;
	cout << "Enter -, if you want to subtract" << endl;
	cout << "Enter +, if you want to put" << endl;
	cout << "Enter /, if you want to split " << endl;
	char op;
	cin >> op;
	double a, b;
	cout << "Enter coeff." << endl;
	cout << " a = ";
	cin >> a;
	cout << " b = ";
	cin >> b;
	double c;
	bool ok = true;
	switch (op)
	{
	case '*':
	case '.':
		c = a*b;
		break;
	case '+':
		c = a + b;
		break;
	case '-':
		c = a - b;
		break;
	case '/':
	case ':':
		if (b == 0)
			(ok = false);
		else
			c = a / b;
		break;
	default:
		(ok = false);
	}
	if (ok == true)
	{
		cout << a << ' ' << op << ' ' << b << " = " << c << endl;
	}
	else
	{
		cout << "Input erorr!" << endl;
	}
	system("pause");
	return 0;
}