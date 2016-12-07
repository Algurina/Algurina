#include <iostream>



using namespace std;


int main()
{

	const int MAX = 5; //размер массива
	int massiv[MAX];
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, j = 0;
	for (j = 0; j < MAX; j++) //вводим массив
	{
		cout << "Vvedite  element massiv[" << j << "]: ";
		cin >> massiv[j];
		cout << endl;
	}
	
	for (j = 0; j < MAX - 1; j++)
	{
		if (massiv[j] >= massiv[j + 1])
		{
			a1 = a1 + 1;
			if (massiv[j] == massiv[j + 1])
				a2 = a2 + 1;
		}
		else if (massiv[j] <= massiv[j + 1])
		{
			a3 = a3 + 1;
			if (massiv[j] == massiv[j + 1])
				a4 = a4 + 1;
		}

	}
	
	if ((a1 == MAX) && (a2 = 0))
	{
		cout << "Strogo ubyvaet";
	}
	else
	{
		if ((a1 == MAX-1) && (a2 > 0))
		{
			cout << "Nie vozrastaet";
		}
		else
		{
			if ((a3 == MAX-1) && (a4 = 0))
			{
				cout << "Strogo vozrastaet";
			}
			else
			{
				if ((a3 == MAX-1) && (a4 > 0))
				{
					cout << "Nie ubyvaet";
				}
				else
					cout << "Error";
			}
		}
	}
	system("pause");
	return 0;
}