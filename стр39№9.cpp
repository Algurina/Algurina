#include <iostream>



using namespace std;


int main()
{
	const int n = 4,m = 5; //razmer
	int matrix[n][m];//opredeliaem tip elementov v matrice
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			cout << "[" << (i + 1) << "][" << (j + 1) << "]=";
			cin >> matrix[i][j];//vvodim element matricy
		}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout.width(5);//shirina elementa
			cout << matrix[i][j];
		}
		cout << endl;
	}
	for (i = 0; i < n; i++)//zamena elementov matricy
		for (j = 0; j < m/2; j++)
		{
			swap(matrix[i][j], matrix[i][m-j-1]);
		}
	cout << "result" << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout.width(5);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

