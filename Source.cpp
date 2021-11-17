#include<iostream>
#include<iomanip>
#include<time.h>
#include<Windows.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(5) << a[i];
	cout << endl;
}

int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] > max && a[i] % 2 == 0)
			max = a[i];
	return max;
}

int FindMaxInd(int* a, const int size)
{
	int max = a[0];
	int maxIdx = 0;

	for (int i = 0; i < size; i++)
		if (a[i] > max)
		{
			max = a[i];
			maxIdx = i;
		}

	return maxIdx;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];
	int Low = 0;
	int High = 100;
	Create(a, n, Low, High);
	cout << "   Ваш масив" << endl;
	cout << "   -----------------------------------------------" << endl;
	Print(a, n);
	cout << "   -----------------------------------------------" << endl;
	int M = Max(a, n);
	cout << "   Найбільший парний елемент -  " << Max(a,n) << endl;
	cout << "   " << endl;
	cout << "   Індекс найбільшого парного елементу -  " << FindMaxInd(a, n) << endl;
	cout << "   " << endl;
	
	return 0;
}
//Написати функцію, яка шукає індекс найбільшого парного елемента одновимірного масиву