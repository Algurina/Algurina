#include "stdafx.h"
#include <iostream>
#include <cstdlib>
 #include <stdlib.h>

 using namespace std;

 void main()
 {
 char snumber[10] = "";
 char sinumber[10] = "";
 int i, j, ind = 0, inumber, vnumber;

 cout << "Enter number:";
 cin >> inumber;

 _itoa_s(inumber, snumber, 10); // число в строку
 vnumber = inumber - 1;
 while (vnumber >= 0)
 {
	 ind = 0;
 char sinumber[10] = "";
 _itoa_s(vnumber, sinumber, 10); // число в строку
for (i = 0; i<strlen(snumber); i++)
{
 for (j = 0; j < strlen(sinumber); j++)
if (snumber[i] == sinumber[j])
 {
 ind++;
 j = strlen(sinumber);
 }
 }
 if (ind == strlen(sinumber))
 {
 cout << "Number = " << vnumber << "\n";
 vnumber--;
 break;
 }
 else
{
 vnumber--;
 }
 }
system("pause");
 }