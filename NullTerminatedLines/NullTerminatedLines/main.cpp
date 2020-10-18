#include<iostream>
#include<Windows.h>
using namespace std;


//char '\0'

void InputLine(char str[], const int n);
int StrLen(char str[]);

//#define STRING_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef STRING_BASICS
	'\0';
	//char str[] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	/*char str[] = "Hello";
	cout << str << endl;*/
	cout << sizeof(char) << endl;
	const int n = 20;
	char str[n];
	cout << "Введите строку: ";//CP-866
	//cin >> str;
	InputLine(str, n);
	cout << str << endl;
	cout << StrLen(str) << endl;
#endif // STRING_BASICS
	char str1[] = "Hello";

	cout << "Сам привет";
	cout << str1 << endl;
	cout << strlen(str1) << endl;
//	"Hello" + "World" = "HelloWorld";
	char str2[] = "World";
	//"Hello" += "World";
	char str3[256];
	strcpy_s(str3, str1);
	strcat_s(str3, str2);
	cout << str3 << endl;
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