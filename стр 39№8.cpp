#include <iostream>



using namespace std;


int main()
{
	const int n = 4; //razmer
	int matrix[n][n];//opredeliaem tip elementov v matrice
	int matrixr[n][n];//resultat raboty
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "[" << (i + 1) << "][" << (j + 1) << "]=";
			cin >> matrix[i][j];//vvodim element matricy
		}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout.width(5);//shirina elementa
			cout << matrix[i][j];
		}
		cout << endl;
	}
	for (i = 0; i < n ; i++)//zamena elementov matricy
		for (j = 0; j < n; j++)
		{
			if ((i < n / 2) && (j < n / 2))
				matrixr[i][j] = matrix[i + 2][j];//meniaem mmestami elementy
			if ((i < n / 2) && (j >= n / 2))
				matrixr[i][j] = matrix[i][j - 2];//meniaem mmestami elementy
			if ((i >= n / 2) && (j < n / 2))
				matrixr[i][j] = matrix[i][j + 2];//meniaem mmestami elementy
			if ((i >= n / 2) && (j >= n / 2))
				matrixr[i][j] = matrix[i - 2][j];//meniaem mmestami elementy
		}
	cout << "result" << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout.width(5);
			cout << matrixr[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

