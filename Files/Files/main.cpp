#include<iostream>//	cin/cout
#include<fstream> //	fin/fout
using namespace std;

//#define WRITE_TO_FILE
#define READ_FROM_FILE

void main()
{
	setlocale(LC_ALL, "");

#ifdef WRITE_TO_FILE
	ofstream fout("File.txt", ios_base::app);//������� � ��������� �����
	fout << "Hello World\n";
	fout.close();//��������� �����
	system("notepad File.txt");
#endif // WRITE_TO_FILE

	const int n = 256;
	char sz_buffer[n]{};	//sz - String Zero (Null terminated line)

	ifstream fin;
	fin.open("File.txt");
		//eof - End Of File (����� �����)
	while (!fin.eof())	//���� �� ����� �����
	{
		fin >> sz_buffer;
		cout << sz_buffer << "\t";
	}
	fin.close();
	//CSV - Comma Separated Values
}