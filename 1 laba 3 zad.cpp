#include <io.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <conio.h> 
#define TRUE 1
using namespace std;

//объ€вление функции генерации массива
void gen(int nn, int ***mas);

/*объ€вление функции вычислени€ max элементов массива*/
int maxelem(int nn, int i1, int j1, int **mas);

void genB(int nn, int ***masB, int **mas);

//объ€вление функции вывода массива
void out(int nn, int **mas);


int main(void){
	int **mass, n;
	int **massB;
	int s;
	cout << "Enter n: ";
	cin >> n;

	gen(n, &mass);
	genB(n, &massB, mass);
	cout << "Matrix A:" << endl;
	out(n, mass);
	cout << "Matrix B:" << endl;
	out(n, massB);
	system("pause");
	return 0;
}

void gen(int nn, int ***mas){
	//функци€ генерации массива 
	int i, j, a;

	*mas = (int**)malloc(nn*sizeof(int*));
	for (i = 0; i<nn; i++){
		(*mas)[i] = (int*)malloc(nn*sizeof(int));
		for (j = 0; j<nn; j++)
		{

			cout << "mas[" << i << "][" << j << "] :";
			cin >> a;
			(*mas)[i][j] = a;
		}
	}
}

void genB(int nn, int ***masB, int **mas){
	//функци€ генерации массива 
	int i, j, a;

	*masB = (int**)malloc(nn*sizeof(int*));
	for (i = 0; i<nn; i++){
		(*masB)[i] = (int*)malloc(nn*sizeof(int));
		for (j = 0; j<nn; j++)
		{
			(*masB)[i][j] = maxelem(nn, i, j, mas);

		}
	}
}

int maxelem(int nn, int i1, int j1, int **mas) {
	/*функци€ вычислени€ max элемента*/
	int i, j, maxe;


	if ((j1<(nn - i1 - 1)) || (j1 == (nn - i1 - 1)))
	{
		maxe = mas[i1][j1];
		for (i = i1; i<nn; i++)
			for (j = j1; j<nn; j++)
				if (maxe<mas[i][j])
					maxe = mas[i][j];
	}
	else
	{

		maxe = mas[0][0];
		for (i = 0; i<(i1 + 1); i++)
			for (j = 0; j<(j1 + 1); j++)
				if (maxe<mas[i][j])
					maxe = mas[i][j];
	}


	return maxe;
}

void out(int nn, int **mas){
	//функци€ вывода массива
	int i, j;
	for (i = 0; i<nn; i++) {
		for (j = 0; j<nn; j++)
			printf("%4d", mas[i][j]);
		printf("\n");
		free(mas[i]);
	}
	free(mas);
}
