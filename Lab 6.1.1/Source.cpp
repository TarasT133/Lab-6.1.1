#include <iostream>
#include <time.h>

using namespace std;

void CreateArray(int* ñ, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
	{
		ñ[i] = Low + rand() % (High - Low + 1);
	}
}

void PrintArray(int* ñ, const int size)
{
	cout << "c[" << size << "] = {";
	for (int i = 0; i < size; i++)
	{
		cout << (i > 0 ? ", " : "") << ñ[i];
	}
	cout << "}" << endl;
}

int Sum(int* ñ, const int n)
{
	int s = 0;

	for (int i = 0; i < n; i++)
	{
		if ((ñ[i] % 2 != 0) || (i % 13 != 0))
		{
			s += ñ[i];
		}
	}

	return s;
}

int Amount(int* ñ, const int n)
{
	int am = 0;

	for (int i = 0; i < n; i++)
	{
		if ((ñ[i] % 2 != 0) || (i % 13 != 0))
		{
			am++;
		}
	}

	return am;
}

void ModifyArray(int* ñ, const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (ñ[i] % 2 == 0)
		{
			ñ[i] = 0;
		}
		else if (i % 13 == 0)
		{
			ñ[i] = 0;
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	const int k = 21;

	int ñ[k];

	int Low = 15;
	int High = 85;
	cout << "Array :" << endl;
	CreateArray(ñ, k, Low, High);
	PrintArray(ñ, k);

	cout << "Sum = " << Sum(ñ, k) << endl;
	cout << "Amount = " << Amount(ñ, k) << endl;
	cout << "Modified array:" << endl;

	ModifyArray(ñ, k);
	PrintArray(ñ, k);

	return 0;
}
