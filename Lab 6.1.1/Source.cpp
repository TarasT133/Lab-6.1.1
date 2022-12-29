#include <iostream>
#include <time.h>

using namespace std;

void CreateArray(int* �, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
	{
		�[i] = Low + rand() % (High - Low + 1);
	}
}

void PrintArray(int* �, const int size)
{
	cout << "c[" << size << "] = {";
	for (int i = 0; i < size; i++)
	{
		cout << (i > 0 ? ", " : "") << �[i];
	}
	cout << "}" << endl;
}

int Sum(int* �, const int n)
{
	int s = 0;

	for (int i = 0; i < n; i++)
	{
		if ((�[i] % 2 != 0) || (i % 13 != 0))
		{
			s += �[i];
		}
	}

	return s;
}

int Amount(int* �, const int n)
{
	int am = 0;

	for (int i = 0; i < n; i++)
	{
		if ((�[i] % 2 != 0) || (i % 13 != 0))
		{
			am++;
		}
	}

	return am;
}

void ModifyArray(int* �, const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (�[i] % 2 == 0)
		{
			�[i] = 0;
		}
		else if (i % 13 == 0)
		{
			�[i] = 0;
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	const int k = 21;

	int �[k];

	int Low = 15;
	int High = 85;
	cout << "Array :" << endl;
	CreateArray(�, k, Low, High);
	PrintArray(�, k);

	cout << "Sum = " << Sum(�, k) << endl;
	cout << "Amount = " << Amount(�, k) << endl;
	cout << "Modified array:" << endl;

	ModifyArray(�, k);
	PrintArray(�, k);

	return 0;
}
