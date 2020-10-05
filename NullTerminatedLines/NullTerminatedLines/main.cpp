#include<iostream>
#include<Windows.h>
using namespace std;

//char '\0'

void InputLine(char str[], const int n);
int StrLen(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	'\0';
	//char str[] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	/*char str[] = "Hello";
	cout << str << endl;*/
	cout << sizeof(char) << endl;
	const int n = 20;
	char str[n];
	cout << "¬ведите строку: ";//CP-866
	//cin >> str;
	InputLine(str, n);
	cout << str << endl;
	cout << StrLen(str) << endl;
}

void InputLine(char str[], const int n)
{
	SetConsoleCP(1251);
	cin.getline(str, n);//CP-1251
	SetConsoleCP(866);
}

int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}