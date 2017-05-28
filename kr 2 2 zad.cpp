#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <locale>
#include <cstdio>
using namespace std;

int main(void)
{
	char FileName1[20];
	int v_Count;
	int v_Number;
	int v_Number1;
	int v_err;

	cout << ("\Enter the name of File1: ");
	cin >> (FileName1);
	cout << ("\Enter the count of numbers in faile: ");
	cin >> ("%ld%", &v_Count);
	ofstream f1;
	f1.open(FileName1, ios::binary);
	for (int i = 0; i<v_Count; i++)
	{
		printf("\Enter the count of numbers in faile: ");
		cin >> ("%ld%", &v_Number);
		f1.write((int*)&v_Number, sizeof(int));
	}
	f1.close();
	ofstream f2;
	f2.open("Temp.dat", ios::binary);
	ifstream f11;
	f11.open(FileName1, ios::binary);
	f11.read((int*)&v_Number1, sizeof(int));
	f2.write((int*)&v_Number, sizeof(int));
	v_Count = 1;
	while (!f11.read((int*)&v_Number, sizeof(int)).eof())
	{
		f2.write((int*)&v_Number, sizeof(int));
		if (v_Number1 == v_Number)
		{
			v_Count++;
		}
		else
		{
			if v_Count>1
			{
				f2.write((int*)&v_Count, sizeof(int));
				v_Count = 1;
			}
			v_Number1 = v_Number;
		}

	}
	f11.close;
	f2.close;
	v_err = remove(FaileName1);
	if (rename("Temp.dat", FileName1) == 0)
		cout << ("\End of work");
	else
		cout << ("\Error rename file");
	return 0;
}

