#include <io.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>
#include <iostream>
#include <fstream>
#define TRUE 1
using namespace std;
typedef struct
{
    int n
	int m
	int l
	int *ptr1
	int *ptr2
} Matr;
void InitFile(char*, int*, int*,int*,int*);
void InitMatr(Matr*,int*,int*, int*);
void DisplayFile (char* , char* );
void DisplayMatr (Matr* );
void MakeFile(char* ,char* );
void MultMatr (Matr* , char* );

int main(void)
{
char FileName[20];
char FileName2[20];
int kNumber;
int n,m,l;
while(TRUE)
{
printf("\nEnter kNumber number of structure:\n");
scanf("%u",&kNumber);

printf("\nEnter n, m, l dimentions of matrixs:\n");
scanf("%u%u%u",&n,&m, &l);

if  ((kNumber > 0) && (n > 0) && (m > 0) && (l>0))  break;
printf("\nNumber is incorrect!!! Try again!!!\n");
}
printf("\nEnter the name of file: \n");
scanf("%s",FileName);

printf("\nEnter the name of file2: \n");
scanf("%s",FileName2);

clrscr();

InitFile (FileName,kNumber,n,m,l);
DisplayFile(FileName);
MakeFile(FileName,FileName2);
return 0;
}

void InitFile(char* String, int n, int n1,int m1,int l1)
{
int i;
int BufSize = sizeof(Matr);
Matr* Matr1;
ofstream f1(String, ios::binary);
for( i = 0; i < n; i++)
{
printf("\nEnter information for the Matr number %ld \n", i+1);
InitMatr(*Matr1,*n1,*m1,*l1)
f1.write((int*)&Matr1, sizeof(Matr));
}
free(Matr1);
fclose(f1);
}


InitMatr(Matr *Matr1,int n2,int m2, int l2)
{
int i, j;
Matr1=new Matr;
Matr1->n=n2;
Matr1->m=m2;
Matr1->l=l2;
Matr1->ptr1=new int[n2][m2];
Matr1->ptr2=new int[m2][l2]
printf("\nEnter elements matr[n,m]:");
for( i = 0; i < n2 * m2; i++)
{
printf("\nEnter elemnts:");
scanf("%s", Matr1 ->ptr1[i]);
}
printf("\nEnter elements matr[m,l]:");
for( j = 0; j < m2 * l2; j++)
{
printf("\nEnter elemnts:");
scanf("%s", Matr1 ->ptr2[j]);
}
}


void DisplayFile(char* String)
{
int BufSize = sizeof(Matr);
Matr Matr1;

ifstream ifile(String, ios::binary);
while (!ifile.read((int*)&Matr1, sizeof(Matr)).eof()) 
{
DisplayMatr(Matr1);
}
free(Matr1);
ifile.close();
}
void DisplayMatr (Matr* Matr1)
{
int i, j;	
printf("\n", Matr1->n,Matr1->m,Matr1->l);
printf("\n matr[n,m]");
for( i = 0; i < Matr1->n; i++)
{
	for( j = 0; j < Matr1->m; j++) 
       {
         printf("\n", Matr1 ->ptr1[i][j]);
       }
}
printf("\n matr[m,l]");
i=0;
j=0;
for( i = 0; i < Matr1->m; i++)
{
	for( j = 0; j < Matr1->l; j++) 
       {
         printf("\n", Matr1 ->ptr2[i][j]);
       }
}

}
void MakeFile(char* File1,char* File2)
{
int BufSize = sizeof(Matr);
Matr Matr1;

ifstream ifile(File1, ios::binary);
while (!ifile.read((int*)&Matr1, sizeof(Matr)).eof()) 
{
MultMatr(Matr1,File2);
}
free(Matr1);
ifile.close;
}
void MultMatr (Matr* Matr1, char* String)
{
int i, j, k, sum;
int	arr1=new int [Matr1->n][Matr1->m];
int	arr2=new int [Matr1->m][Matr1->l];
int	arr3=new int [Matr1->n][Matr1->l];
for( i = 0; i < Matr1->n; i++)
{
	for( j = 0; j < Matr1->l; j++) 
       {
		 sum=0;
		 for (k=0;k<Matr1->m; k++)
		 {
         sum+= arr1[i][k] * arr2[k][j];
		 }
		 arr3[i][j]=sum;
	 
       }
}
ofstream f1(String, ios::out | ios::app);
f1.write((int*)&Matr1, sizeof(Matr));
free(arr1);
free(arr2);
free(arr3);
f1.close;
}
