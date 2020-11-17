#include <iostream>
#include <time.h>
#include "Sort.h"

using namespace std;

void Timer(int size, bool Functioin) // QuickSort - 0, BubbleSort - 1
{
	int* arr = new int[size];
	int Rand;
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	cout << "Array size = " << size << endl;
	clock_t start = clock();
	if (Functioin) 
	{
		BubleSort(arr, size);
		cout << "Sorting type - Bubble Sort" << endl;
	}
	else
	{
		QuickSort(arr, size);
		cout << "Sorting type - Quick Sort" << endl;
	}
	clock_t stop = clock();
	cout << "Time spent sorting = " << stop - start << "ms" << endl;
}

int main()
{
	Timer(100000, 0);
}