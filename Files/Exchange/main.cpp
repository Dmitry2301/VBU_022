#include<iostream>
#include<fstream>
#include<Windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 256;
	const int IP_MAX_SIZE = 16;	//Максимально возможный размер строки с IP  адресом
	const int MAC_MAX_SIZE = 18;//Максимально возможный размер строки с MAC адресом
	char sz_ip_buffer[IP_MAX_SIZE]{};
	char sz_mac_buffer[MAC_MAX_SIZE]{};

	char source_filesname[SIZE] = "202center.txt";
	char final_filename[SIZE];

	cout << "Введите имя конечного файла"; 
	SetConsoleCP(1251);
	cin >> final_filename;
	SetConsoleCP(866);
	if (strstr(final_filename, ".txt") == nullptr)
	{
		strcat_s(final_filename, ".txt");
	}

	ifstream fin(source_filesname);
	ofstream fout(final_filename);

	if (fin.is_open())	//Если файл открыт
	{
		while (!fin.eof())
		{
			fin >> sz_ip_buffer;
			fin >> sz_mac_buffer;
			fout << sz_mac_buffer << "\t\t" << sz_ip_buffer << endl;
		}
	}

	fout.close();
	fin.close();

	char command[SIZE] = "notepad ";
	strcat_s(command, final_filename);
	system(command);
	char command_remove_file[SIZE] = "erase ";
	strcat_s(command_remove_file, final_filename);
	//system(command_remove_file);
	//system(command);
}