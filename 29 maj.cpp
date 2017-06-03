#include<iostream> 
#include<fstream>
#include <locale>

using namespace std;

struct pare
{
	int n;
	bool prime;
	
};

void readToBinFile(const char* fileName, int n);
void writeToBinFile(const char* fileName, pare );
void displayFromBinFile(const char* fileName);
void create(char* , char*);
bool primeNumber(int n);

int main()
{
	char* fileName1 = "text.bin";
	char* fileName2 = "result.bin";
	int n;
	cout << "kol-vo elementov" << endl;
	cin >> n;
	ofstream out1(fileName2, ios::binary);//открываем файл дл€ записи(если данные сущюЅто они удал€ютс€)
	out1.close();
	readToBinFile(fileName1, n);
	create(fileName1, fileName2);
	displayFromBinFile(fileName2);
	system("pause");
	return 0;
}

void create(char* fileName, char* fileName2)
{
	ifstream in(fileName, ios::binary);
	//ofstream out(fileName2, ios::binary);
	if (!in.is_open())
	{
		cout << "Cannot open file to write!" << endl;
		exit(1);
	}
	pare p;
	int r;
	while (!in.read((char*)&r, sizeof(int)).eof())
	{
		p.n = r;
		p.prime = primeNumber (r);
		writeToBinFile ( fileName2, p );
	}
	in.close();
}

void readToBinFile(const char* fileName, int n)
{
	ofstream outfile(fileName, ios::binary);
	if (!outfile.is_open())
	{
		cout << "Cannot open file to write!" << endl;
		exit(1);
	}
	int t;
	for (int i = 0; i < n; i++)
	{
		cout << "t=";
		cin >> t;
		outfile.write((char*)&t, sizeof(int));
	}
	outfile.close();

}
void writeToBinFile(const char* fileName, pare pare1)
{
	ofstream outfile(fileName, ios::binary | ios::app);//(app-в режиме добавлени€)
	outfile.write((char*)&pare1, sizeof(pare));
	outfile.close();
}
void displayFromBinFile(const char* fileName)
{
	ifstream infile(fileName, ios::binary );
	pare p;
	while (!infile.read((char*)&p, sizeof(pare)).eof())
		if (p.prime == 0)
		cout << p.n << " "<< "false" << endl;
		else cout << p.n << " " << "true" << endl;
	infile.close();
}
bool primeNumber(int n)
{
	int d;
	int r;
	bool o = false;
	
	d = 2;
	r = 0;
	do
	{
		if (n > 1)
			r = n % d;
		else
		{
			r = 0;
			d = 1;
		}
		if (r != 0) d++;
	} while (r != 0);
	if (d == n)
		o = true  ;
	else o = false; 
	//cout << o << " " << n << endl;
	return o;
}
/*bool primeNumber(int n)
{
	int n1 = n;
	bool o = false;
	for (int i = 2; i <= (n1 / 2); i++)
	{
		if (n1 % i == 0)
		{
			o = true;
			break;
		}
	}
	if (o == true) return false;
	else return true;
}*/



