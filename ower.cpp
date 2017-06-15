#include <iostream>
#include "ownerName.h"

using namespace std;

Owner InitOwner();
Owner* InitArray(int);
void DisplayArray(Owner*, int);
void EnterArray(int*, int);
void SortFirstName(Owner*, int);
void Swap(Owner&, Owner&);

int main()
{
	int n;
	cout << "Enter the number of Owners:";
	cin >> n;
	system("cls");
	Owner* owner = InitArray(n);
	if (!owner)
	{
		cout << "\nDynamic array doesn't exist!\n";
		system("pause");
		return 0;
	}
	cout << "The list of Owner : " << endl << endl;
	DisplayArray(owner, n);
	cout << "The sorting list of Owner:" << endl;;
	SortFirstName(owner, n);
	DisplayArray(owner, n);
	delete[] owner;
	system("pause");
	return 0;
}

Owner InitOwner()
{
	char SetName[N] = "", SetSecondName[N] = "", SetAddress[N] = "", SetCarModel[N] = "";
	cout << "Enter the name of the owner: " << endl;
	cin.ignore();
	cin.get(SetName, N, '\n');
	cout << "Enter the Second Name: " << endl;
	cin.ignore();
	cin.get(SetSecondName, N, '\n');
	cout << "Enter the Address: " << endl;
	cin.ignore();
	cin.get(SetAddress, N, '\n');
	cout << "Enter CarModel : " << endl;
	cin.ignore();
	cin.get(SetCarModel, N, '\n');
	int SetNumber, SetCarNumber;
	cout << "Enter the phone number: " << endl;
	cin >> SetNumber;
	cout << "Enter the car number: " << endl;
	cin >> SetCarNumber;
	Owner owner;
	owner.SetOwner(SetName, SetSecondName, SetAddress, SetNumber, SetCarNumber, SetCarModel);
	return owner;
}

Owner* InitArray(int n)
{
	Owner* array = new Owner[n];
	if (!array)
		return NULL;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the information about " << (i + 1) << "  Owner\n" << endl;
		array[i] = InitOwner();
	}
	return array;
}

void EnterArray(int* array, int n)
{
	for (int i = 0; i < M; i++)
	{
		cout << "enter A[" << (i + 1) << "] = ";
		cin >> array[i];
	}
}

void DisplayArray(Owner* array, int n)
{
	for (int i = 0; i < n; i++)
		array[i].DisplayOwner();
	cout << endl;
}

void SortName(Owner* array, int n)
{
	for (int i = 0; i <= n; i++)
		for (int j = n - 1; j > i; j--)
			if (strcmp(array[j].GetName(), array[j - 1].GetName()) < 0)
				Swap(array[j], array[j - 1]);
}

void Swap(Owner &a, Owner &b)
{
	Owner t = a;
	a = b;
	b = t;
}
