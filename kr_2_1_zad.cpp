/* В певом файле содержатся числа, отсортированные по возрастанию.
   Во втром файле содержатся числа, отсортированные по возрастанию.
   Получить файл, содержащий числа из первого и второго и отсортированные по возрастанию.
   Все файлы текстовые.
*/
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main()
{
	char FileName1[20];
	char FileName2[20];
	char FileItog[20];
	int Term1, Term2, v_count;


	cout << "Enter the name of File1: ";
	cin >> FileName1;
	cout << "Enter the name of File2: ";
	cin >> FileName2;
	cout << "Enter the name of FileItog: ";
	cin >> FileItog;
	cout << "Enter the count of numbers for File1 from min to max: ";
	cin >> v_count;
	ofstream f11(FileName1);
	for (int i = 0; i < v_count; i++)
	{
		cout << "Enter the number: ";
		cin >> Term1;
		f11 << Term1 << "\t";//endl;
	}
	f11.close();

	cout << "Enter the count of numbers for File12 from min to max: ";
	cin >> v_count;
	ofstream f22(FileName2);
	for (int j = 0; j < v_count; j++)
	{
		cout << "Enter the number: ";
		cin >> Term1;
		f22 << Term1 << "\t";//endl;
	}
	f22.close();

	ifstream f1(FileName1);
	ifstream f2(FileName2);
	ofstream f3(FileItog);
	f1 >> Term1;
	f2 >> Term2;
	while ((!f1.eof()) || (!f2.eof()))
	{
		
		if  (Term1>Term2) 			
		{
			
			if (!f2.eof())
			{
				f3 << Term2 << "\t"; //endl;
				f2 >> Term2;				
			}
			else
			{
				Term2 = Term1 + 1;
			}
		}
		else if (Term1 < Term2)
			{
				
				if (!f1.eof())
				{
					f3 << Term1 << "\t"; //endl;
					f1 >> Term1;
				}
				else
				{
					Term1 = Term2 + 1;
				}
			}
		else if (Term1 == Term2)
			{
				
				if (!f2.eof())
				{
					f3 << Term2 << "\t"; //endl;
					f2 >> Term2;
				}
				else Term2 = Term1 + 1;
				if (!f1.eof())
				{
					f3 << Term1 << "\t"; //endl;
					f1 >> Term1;
				}
				else Term1 = Term2 + 1;
			}

	}
	
	f1.close();
	f2.close();
	f3.close();
	/*ifstream f4(FileItog);
	while (!f4.eof())
	{
		f4 >> Term1;
		cout << Term1 << endl; 
	}
	f4.close();*/
	system("pause");
	return 0;
}

