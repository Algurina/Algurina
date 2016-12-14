#include <iostream>



using namespace std;


int main()
{
	const int n = 4; //размер 
	int matrix[n][n];
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			{
				cout << "[" << (i + 1) << "][" << (j + 1) << "]=";
				cin >> matrix[i][j];
			}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout.width(5);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	for (i = 0; i < n/2; i++)
		for (j = 0; j < n; j++)
			if ( j<=n/2 )
			swap(matrix[i][j], matrix[i + n / 2][j + n / 2]);
			else
				swap(matrix[i][j], matrix[i + n / 2][j - n / 2]);
	cout << "result"<<endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout.width(5);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

