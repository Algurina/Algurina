#include <iostream>


using namespace std;
const int N = 256;
void ObtainArrayOfWords(char s[], char arr[][N], int& k);
void DisplayWords(char arr[][N], int n);
bool IsAlphabet(char symbol);
int LengthString(char str[]);
int IndexString(char words[][N], char qq[], char word[], int n);

int main()
{
	char str[] = "  if  your   !   mouse   is   unavailable   or; "
		"   if   you  -  prefer    to   use   your   keyboard  ,"
		"  you   can   use   the   following   keyboard   ...";
	char words[N][N] = { "" };
	char qq[] = { "" }; // slovo kotoroe chocu zamienit
	char word[] = { "" }; // slovo na kotoroe zamieniayu
	int k = 0;
	int n = 256;
	ObtainArrayOfWords(str, words, k);
	cout << endl << "Source string: " << str << endl;
	DisplayWords(words, k);
	cout << endl;
	cout << "Enter the word that you want change" << endl;
	cin >> qq;
	cout << "Enter the word on what you want change" << endl;
	cin >> word;
	IndexString(words, qq, word, n);
	DisplayWords(words, k);
	system("pause");
	return 0;
}

void ObtainArrayOfWords(char s[], char arr[][N], int& k)
{
	bool flag = false;
	int   i = -1, j = 0;
	k = 0;
	while (s[++i])
	{
		if (IsAlphabet(s[i]))
		{
			flag = true;
			arr[k][j] = s[i];
			j++;
			continue;
		}

		if (flag)
		{
			flag = false;
			k++;
			j = 0;
		}

	}
	k--;
}
void DisplayWords(char arr[][N], int n)
{

	for (int i = 0; i < n; i++)
	{

		cout << (i + 1) << ". " << arr[i] << endl;
	}
}
bool IsAlphabet(char symbol)
{
	if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
		return true;
	return false;
}
int LengthString(char str[])
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int IndexString(char str[][N], char qq[], char word[], int n)
{
	int index = -1;
	for (int j = 0; j < n; j++)
		for (int i = 0; i < n; i++)
		{
			if (str[j][i] != qq[i])
			{
				index = -1;
				break;
			}
			else
			{
				index = j;
				str[index][i] = word[i];
			}
		}

	return -1;

}