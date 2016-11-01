#include <iostream>

using namespace std;

bool IsDataValid(double, double, int, int, int);
double FindApproxSum(double, double);
void ShowSumOnPosition(double, int, int, int);

int main()
{
	int h, a, b;
	double x, epsilon;
	while (true)
	{
		while (true)
		{
			cout << "Enter x (! = 0): ";
			cin >> x;
			cout << "Enter epsilon (0 < epsilon < 1): ";
			cin >> epsilon;
			cout << "Enter your first number a: ";
			cin >> a;
			cout << "Enter your last number b: ";
			cin >> b;
			cout << "Enter h: ";
			cin >> h;
			if (IsDataValid(x, epsilon, a, b, h)) break;
			cout << "Invalid Data, try again" << endl;
		}
		double sum = FindApproxSum(x, epsilon);
		cout << endl << "Approximate sum: " << sum;
		ShowSumOnPosition(x, a, b, h);
		system("pause");
	}
}

bool IsDataValid(double x, double epsilon, int a, int b, int h)
{
	if (x == 0) return false;
	if (epsilon < 0 || epsilon >= 1) return false;
	if (b <= 0) return false;
	if (h <= a) return false;
	return true;
}

double FindApproxSum(double x, double epsilon)
{
	int k = 0;
	double a = x*x*x / 3, sum = a;

	while (fabs(a) > epsilon)
	
		k++;
		a = a*(-1)*x*x*x*x / (2 * k + 1) / (2 * k)*(4 * (k - 1) + 3) / (4 * k + 3);
		sum += a;
	
	return sum;
}

void ShowSumOnPosition(double x, int first, int last, int h)
{
	int k = 0;
	double a = x*x*x / 3, sum = a;
	while (k<first)
	{
		k++;
		a = a*(-1)*x*x*x*x / (2 * k + 1) / (2 * k)*(4 * (k - 1) + 3) / (4 * k + 3);
		sum += a;
	}
	cout << endl << k << ". " << sum;
	while (k <= last)
	
		k += h;
		a = a*(-1)*x*x*x*x / (2 * k + 1) / (2 * k)*(4 * (k - 1) + 3) / (4 * k + 3);
		sum += a;
		cout << endl << k << ". " << sum;
	
}