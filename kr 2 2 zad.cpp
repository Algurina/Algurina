/*
В бинарном файле записаны целые числа.Изменить содержимое файла,
записав после серии полряд идущих чисел кол-во их повторений.
*/
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <locale.h>

using namespace std;


int main()
{
	char* FileName1="work.bin";
	int v_Count;
	int v_Number;
	int v_Number1;
	int v_err;
		
	cout<<"Enter the count of numbers in faile: ";
	cin>>v_Count;
	ofstream f1(FileName1, ios::binary);
	for (int i=0;i<v_Count;i++)
	{
		cout<<"Enter the number: ";
		cin>>v_Number;
		f1.write((char*)&v_Number, sizeof(int));
		cout<<endl;
	}
    f1.close();
	ofstream f2("Temp.dat", ios::binary);
	ifstream f11(FileName1, ios::binary);
	f11.read((char*)&v_Number1, sizeof(int));
	f2.write((char*)&v_Number1, sizeof(int));
	v_Count=1;
	//while (!f11.read((char*)&v_Number, sizeof(int)).eof()) 
	while (1)
	{
		f11.read((char*)&v_Number, sizeof(int));
		if (f11.eof()) break;
		if (v_Number1==v_Number)
		{ 
		   v_Count++;		   
		} 
		else
		{
			if (v_Count>1)
			{
			  f2.write((char*)&v_Count, sizeof(int)); 
			v_Count=1;
			}
			v_Number1=v_Number;			
		}
		f2.write((char*)&v_Number, sizeof(int));
  
    }
    
    if (v_Count>1) 
	{
	 
     f2.write((char*)&v_Count, sizeof(int));
	}
    
	f11.close();
	f2.close();
	v_err = remove("work.bin");
	v_err = rename("temp.dat", "work.bin");	
	ifstream frez(FileName1, ios::binary);
	v_Number=0;
	//while (!frez.read((char*)&v_Number, sizeof(int)).eof())
	while (1) 
	{
		frez.read((char*)&v_Number, sizeof(int));
		if (frez.eof()) break;
		cout<<v_Number<<endl;  
    }
	system("pause");
	return 0;
	}

