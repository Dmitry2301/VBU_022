#include<iostream>
using namespace std;
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* push_back(int* arr, int& n, int value);
int* push_front(int* arr, int& n, int value);
int* insert(int* arr, int& n, int value, int index);
int* pop_back(int* arr, int& n);
int* pop_front(int* arr, int& n);
int* erase(int* arr, int& n, int index);
int* sort(int* arr, int& n);
int* sum(int* arr, int& n, int& a);
int* avg(int* arr, int& n, int& b);
int* minValueIn(int* arr, int& n, int& min);
int* maxValueIn(int* arr, int& n, int& max);
//float
void FillRand(float arr[], const int n);
void Print(float arr[], const int n);
float* insert(float* arr, int& n, float value, int index);
float* pop_back(float* arr, int& n);
float* pop_front(float* arr, int& n);
float* erase(float* arr, int& n, int index);
float* sort(float* arr, int& n);
float* sum(float* arr, int& n, float& a);
float* avg(float* arr, int& n, float& b);
float* minValueIn(float* arr, int& n, float& min);
float* maxValueIn(float* arr, int& n, float& max);
//double
void FillRand(double arr[], const int n);
void Print(double arr[], const int n);
double* insert(double* arr, int& n, double value, int index);
double* pop_back(double* arr, int& n);
double* pop_front(double* arr, int& n);
double* erase(double* arr, int& n, int index);
double* sort(double* arr, int& n);
double* sum(double* arr, int& n, double& a);
double* avg(double* arr, int& n, double& b);
double* minValueIn(double* arr, int& n, double& min);
double* maxValueIn(double* arr, int& n, double& max);
//char
void FillRand(char arr[], const int n);
void Print(char arr[], const int n);
char* insert(char* arr, int& n, char value, int index);
char* pop_back(char* arr, int& n);
char* pop_front(char* arr, int& n);
char* erase(char* arr, int& n, int index);
char* sort(char* arr, int& n);
char* minValueIn(char* arr, int& n, char& min);
char* maxValueIn(char* arr, int& n, char& max);


void main()
{
	setlocale(LC_ALL, "");
	int n, value, index = 3, a = 0, b = 0, min, max;
	float  value1, a1 = 0, b1 = 0, min1, max1;
	double  value2, a2 = 0, b2 = 0, min2, max2;
	char  value3, a3 = 0, b3 = 0, min3, max3;
	cout << "¬ведите размер массива: "; cin >> n;
	int* arr = new int[n];
	float* arr1 = new float[n];
	double* arr2 = new double[n];
	char* arr3 = new char[n];
	//INT
	FillRand(arr, n);
	Print(arr, n);
	cout << "¬ведите добавл€емое значение: "; cin >> value;
	arr = insert(arr, n, value, index);
	Print(arr, n);
	cout << endl;
	cout << "удал€ет последний элемент из массива" << endl;
	arr = pop_back(arr, n);
	Print(arr, n);
	cout << "удал€ет первый элемент из массива" << endl;
	arr = pop_front(arr, n);
	Print(arr, n);
	cout << "удал€ет из массива значение, по заданному индексу" << endl;
	arr = erase(arr, n, index);
	Print(arr, n);
	cout << "сортирует массив" << endl;
	sort(arr, n);
	Print(arr, n);
	sum(arr, n, a);
	cout << "сумма элементов массива: " << a << endl;
	avg(arr, n, b);
	cout << "среднее арифметическое элементов массива: " << b << endl;
	minValueIn(arr, n, min);
	cout << "минимальное значение в массиве: " << min << endl;
	maxValueIn(arr, n, max);
	cout << "максимальное значение в массиве: " << max << endl;
	delete[]arr;
	//FLOAT
	cout << "float" << endl;
	cout << "¬ведите размер массива: "; cin >> n;
	FillRand(arr1, n);
	Print(arr1, n);
	cout << "¬ведите добавл€емое значение: "; cin >> value1;
	arr1 = insert(arr1, n, value1, index);
	Print(arr1, n);
	cout << endl;
	cout << "удал€ет последний элемент из массива" << endl;
	arr1 = pop_back(arr1, n);
	Print(arr1, n);
	cout << "удал€ет первый элемент из массива" << endl;
	arr1 = pop_front(arr1, n);
	Print(arr1, n);
	cout << "удал€ет из массива значение, по заданному индексу" << endl;
	arr1 = erase(arr1, n, index);
	Print(arr1, n);
	cout << "сортирует массив" << endl;
	sort(arr1, n);
	Print(arr1, n);
	sum(arr1, n, a1);
	cout << "сумма элементов массива: " << a1 << endl;
	avg(arr1, n, b1);
	cout << "среднее арифметическое элементов массива: " << b1 << endl;
	minValueIn(arr1, n, min1);
	cout << "минимальное значение в массиве: " << min1 << endl;
	maxValueIn(arr1, n, max1);
	cout << "максимальное значение в массиве: " << max1 << endl;
	delete[]arr1;
	//DOUBLE
	cout << "double" << endl;
	cout << "¬ведите размер массива: "; cin >> n;
	FillRand(arr2, n);
	Print(arr2, n);
	cout << "¬ведите добавл€емое значение: "; cin >> value2;
	arr2 = insert(arr2, n, value2, index);
	Print(arr2, n);
	cout << endl;
	cout << "удал€ет последний элемент из массива" << endl;
	arr2 = pop_back(arr2, n);
	Print(arr2, n);
	cout << "удал€ет первый элемент из массива" << endl;
	arr2 = pop_front(arr2, n);
	Print(arr2, n);
	cout << "удал€ет из массива значение, по заданному индексу" << endl;
	arr2 = erase(arr2, n, index);
	Print(arr2, n);
	cout << "сортирует массив" << endl;
	sort(arr2, n);
	Print(arr2, n);
	sum(arr2, n, a2);
	cout << "сумма элементов массива: " << a2 << endl;
	avg(arr2, n, b2);
	cout << "среднее арифметическое элементов массива: " << b2 << endl;
	minValueIn(arr2, n, min2);
	cout << "минимальное значение в массиве: " << min2 << endl;
	maxValueIn(arr2, n, max2);
	cout << "максимальное значение в массиве: " << max2 << endl;
	delete[]arr2;
	//CHAR
	cout << "char" << endl;
	cout << "¬ведите размер массива: "; cin >> n;
	FillRand(arr3, n);
	Print(arr3, n);
	cout << "¬ведите добавл€емое значение: "; cin >> value3;
	arr3 = insert(arr3, n, value3, index);
	Print(arr3, n);
	cout << endl;
	cout << "удал€ет последний элемент из массива" << endl;
	arr3 = pop_back(arr3, n);
	Print(arr3, n);
	cout << "удал€ет первый элемент из массива" << endl;
	arr3 = pop_front(arr3, n);
	Print(arr3, n);
	cout << "удал€ет из массива значение, по заданному индексу" << endl;
	arr3 = erase(arr3, n, index);
	Print(arr3, n);
	cout << "сортирует массив" << endl;
	sort(arr3, n);
	Print(arr3, n);
	minValueIn(arr3, n, min3);
	cout << "минимальное значение в массиве: " << min3 << endl;
	maxValueIn(arr3, n, max3);
	cout << "максимальное значение в массиве: " << max3 << endl;
	delete[]arr3;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int* push_back(int* arr, int& n, int value)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return buffer;
}
int* push_front(int* arr, int& n, int value)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return buffer;
}
int* insert(int* arr, int& n, int value, int index)
{
	int* buffer = new int[n + 1]{};
	int i = 0;
	for (i; i < n; i++)
	{
		if (i < index)buffer[i] = arr[i];
		else buffer[i + 1] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	arr[index] = value;
	n++;
	return buffer;
}
int* pop_back(int* arr, int& n)
{
	int* buffer = new int[n - 1]{};
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
int* pop_front(int* arr, int& n)
{
	int* buffer = new int[n - 1]{};
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
int* erase(int* arr, int& n, int index)
{
	int* buffer = new int[n - 1]{};
	int i = 0;
	for (i; i < n; i++)
	{
		if (i < index)buffer[i] = arr[i];
		else buffer[i] = arr[i + 1];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
int* sort(int* arr, int& n)
{
	for (int a = 0; a < n; a++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				int x = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = x;
			}
		}

	}
	return arr;
}
int* sum(int* arr, int& n, int& a)
{
	for (int i = 0; i < n; i++)
	{
		a += arr[i];
	}
	return&a;
}
int* avg(int* arr, int& n, int& b)
{
	for (int i = 0; i < n; i++)
	{
		b += arr[i];
	}
	b = b / n;
	return&b;
}
int* minValueIn(int* arr, int& n, int& min)
{
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])min = arr[i];
	}
	return&min;
}
int* maxValueIn(int* arr, int& n, int& max)
{
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])max = arr[i];
	}
	return&max;
}
//float
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (float)(rand() % 100 * 0.7);
	}
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
float* insert(float* arr, int& n, float value, int index)
{
	float* buffer = new float[n + 1]{};
	int i = 0;
	for (i; i < n; i++)
	{
		if (i < index)buffer[i] = arr[i];
		else buffer[i + 1] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	arr[index] = value;
	n++;
	return buffer;
}
float* pop_back(float* arr, int& n)
{
	float* buffer = new float[n - 1]{};
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
float* pop_front(float* arr, int& n)
{
	float* buffer = new float[n - 1]{};
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
float* erase(float* arr, int& n, int index)
{
	float* buffer = new float[n - 1]{};
	int i = 0;
	for (i; i < n; i++)
	{
		if (i < index)buffer[i] = arr[i];
		else buffer[i] = arr[i + 1];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
float* sort(float* arr, int& n)
{
	for (int a = 0; a < n; a++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				float x = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = x;
			}
		}

	}
	return arr;
}
float* sum(float* arr, int& n, float& a)
{
	for (int i = 0; i < n; i++)
	{
		a += arr[i];
	}
	return&a;
}
float* avg(float* arr, int& n, float& b)
{
	float l = 0;
	for (int i = 0; i < n; i++)
	{
		b += arr[i]; l++;
	}
	b = b / n;
	return&b;
}
float* minValueIn(float* arr, int& n, float& min)
{
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])min = arr[i];
	}
	return&min;
}
float* maxValueIn(float* arr, int& n, float& max)
{
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])max = arr[i];
	}
	return&max;
}
//double
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (double)-(rand() % 100 - 5) / 1.1;
	}
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
double* insert(double* arr, int& n, double value, int index)
{
	double* buffer = new double[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		if (i < index)buffer[i] = arr[i];
		else buffer[i + 1] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	arr[index] = value;
	n++;
	return buffer;
}
double* pop_back(double* arr, int& n)
{
	double* buffer = new double[n - 1]{};
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
double* pop_front(double* arr, int& n)
{
	double* buffer = new double[n - 1]{};
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
double* erase(double* arr, int& n, int index)
{
	double* buffer = new double[n - 1]{};
	int i = 0;
	for (i; i < n; i++)
	{
		if (i < index)buffer[i] = arr[i];
		else buffer[i] = arr[i + 1];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
double* sort(double* arr, int& n)
{
	for (int a = 0; a < n; a++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				double x = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = x;
			}
		}

	}
	return arr;
}
double* sum(double* arr, int& n, double& a)
{
	for (int i = 0; i < n; i++)
	{
		a += arr[i];
	}
	return&a;
}
double* avg(double* arr, int& n, double& b)
{
	double l = 0;
	for (int i = 0; i < n; i++)
	{
		b += arr[i]; l++;
	}
	b = b / n;
	return&b;
}
double* minValueIn(double* arr, int& n, double& min)
{
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])min = arr[i];
	}
	return&min;
}
double* maxValueIn(double* arr, int& n, double& max)
{
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])max = arr[i];
	}
	return&max;
}
//char
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = (char)(rand() % 83) + 64;
	}
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
char* insert(char* arr, int& n, char value, int index)
{
	char* buffer = new char[n + 1]{};
	int i = 0;
	for (i; i < n; i++)
	{
		if (i < index)buffer[i] = arr[i];
		else buffer[i + 1] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	arr[index] = value;
	n++;
	return buffer;
}
char* pop_back(char* arr, int& n)
{
	char* buffer = new char[n - 1]{};
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
char* pop_front(char* arr, int& n)
{
	char* buffer = new char[n - 1]{};
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
char* erase(char* arr, int& n, int index)
{
	char* buffer = new char[n - 1]{};
	int i = 0;
	for (i; i < n; i++)
	{
		if (i < index)buffer[i] = arr[i];
		else buffer[i] = arr[i + 1];
	}
	delete[]arr;
	arr = buffer;
	n--;
	return buffer;
}
char* sort(char* arr, int& n)
{
	for (int a = 0; a < n; a++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				char x = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = x;
			}
		}

	}
	return arr;
}
char* minValueIn(char* arr, int& n, char& min)
{
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])min = arr[i];
	}
	return&min;
}
char* maxValueIn(char* arr, int& n, char& max)
{
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])max = arr[i];
	}
	return&max;
}
