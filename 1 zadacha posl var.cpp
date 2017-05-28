#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	char FileName1[20] = "tes1";
	char FileName2[20] = "tes2";
	char FileItog[20] = "tes3";
	ifstream in1;
	ifstream in2;
	ofstream out3;
	in1.open(FileName1);
	in2.open(FileName2);
	out3.open(FileItog);
	int term1, term2;
	in1 >> term1;
	in2 >> term2;
	while (!in2.eof() && !in1.eof())
	{
		if (term1 >= term2)
		{
			out3.width(5);
			out3 << term1;
			in1 >> term1;
		}
		else
		{
			out3.width(5);
			out3 << term2;
			in2 >> term2;
		}
	}
	if (in1.eof())
	{
		while (!in2.eof())
		{
			out3.width(5);
			out3 << term2;
			in2 >> term2;
		}
	}
	else
		if (in2.eof())
		{
			while (!in1.eof())
			{
				out3.width(5);
				out3 << term1;
				in1 >> term1;
			}

		}
	in1.close();
	in2.close();
	out3.close();
	return 0;
}