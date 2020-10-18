#include<iostream>
using namespace std;

int factorial(int n)
{
	if (n == 1)return 1;
	cout << n << endl;
	int f = n * factorial(n - 1);
	cout << n << "! = " << f << endl;
	return f;
}

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите число:"; cin >> n;
	cout << factorial(n) << endl;
	//cout << "Hello World!";
	//main();
}