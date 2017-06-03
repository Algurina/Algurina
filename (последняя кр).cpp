#include <iostream>
#include <fstream>
#include <locale>
//#include <studio.h>

using namespace std;

int main(void)
{
	int vNumber;
	int vValue;
	//int i;
	int d;
	int r;
	ofstream fileo("zad.dat", ios::binary);//вывод записи в файл
	cout << "Enter the number of integers : " << endl;
	cin >> vNumber;	
	for(int i = 0; i < vNumber; i++)
	{
		cout << " Enter the number : " << endl;
		cin >> vValue;
		fileo.write((char*)&vValue, sizeof(int));
	}
	fileo.close();
	vValue = 0;
	ifstream filei("zad.dat", ios::binary);
	while(!filei.read((char*)&vValue, sizeof(int)).eof())
	{
		
		d = 2;
		r = 0;
		do
		{   
			if (vValue > 1 )
				r = vValue % d;
			else
			{
				r = 0;
				d = 1;
			}
			if (r != 0) d++;
		} while (r != 0);
		if (d == vValue)
			cout << "true "<< vValue <<endl;
		else cout << "false "<<  vValue <<endl;
	}
	system ("pause");
	return 0;

}