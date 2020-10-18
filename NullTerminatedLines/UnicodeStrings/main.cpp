#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << sizeof(char) << endl;	//ASCII
	cout << sizeof(wchar_t) << endl;//Unicode
	wchar_t str[] = L"Hello";
	wcout << str << endl;

	const int SIZE = 256;
	wchar_t name[SIZE]{};
	wchar_t surname[SIZE]{};
	wcout << L"Введите Ваше имя:";
	SetConsoleCP(1251);
	//wcin >> name;
	wcin.getline(name, SIZE);
	SetConsoleCP(866);
	wcout << name << endl;
	wcout << L"Длина строки: " << wcslen(name) << L" символов." << endl;
	wcout << L"Введите Вашу фамилию: "; 
	SetConsoleCP(1251);
	wcin.getline(surname, SIZE);
	SetConsoleCP(866);
	wchar_t full_name[SIZE] = {};	//RAII - Resource Acquilization Is Initialization
	wcscpy_s(full_name, SIZE, name);
	wcscat_s(full_name, SIZE, surname);
	wcout << full_name << endl;
	int a = int();
}

/*
----------------------------
000
001
010
011
100
101
110
111
----------------------------
*/