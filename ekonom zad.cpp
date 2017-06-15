
#include <iostream>
#include "ownerName.h"

using namespace std;

Owner::Owner()
{

}

Owner::~Owner()
{

}

void Owner::SetName(char* s)
{
	strcpy(Name, s);
}

void Owner::SetSecondName(char* s)
{
	strcpy(SecondName, s);
}

void Owner::SetAddress(char* s)
{
	strcpy(Address, s);
}

void Owner::SetNumber(int Number)
{
	this->Number = Number;
}

void Owner::SetCarNumber(int CarNumber)
{
	this->CarNumber = CarNumber;
}

void Owner::SetCarModel(char* s)
{
	strcpy(CarModel, s);
}

void  Owner::SetOwner(char* s1, char* s2, char* s3, int n1, int n2, char* s4)
{
	SetName(s1);
	SetSecondName(s2);
	SetAddress(s3);
	SetNumber(n1);
	SetCarNumber(n2);
	SetCarModel(s4);

}

char* Owner::GetName()
{
	return Name;
}
char* Owner::GetSecondName()
{
	return SecondName;
}
char* Owner::GetAddress()
{
	return Address;
}
int Owner::GetNumber()
{
	return Number;
}
int Owner::GetCarNumber()
{
	return CarNumber;
}
char* Owner::GetCarModel()
{
	return CarModel;
}
û
void  Owner::DisplayOwner()
{
	cout << endl << Name << " " << SecondName << ", \t";
	cout.precision(3);
	cout << Address << "  , \t" << Number << "  , \t" << CarNumber << "  , \t" << CarModel << "  , \t" << ".";

}
