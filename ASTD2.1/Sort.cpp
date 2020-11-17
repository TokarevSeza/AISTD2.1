#include "Sort.h"

int BinarySearch(int* arr, int size, int search)
{
	int mid = size / 2, left = 0, right = size - 1;
	while (left <= right)
	{
		if (arr[mid] < search)
		{
			left = mid + 1;
			mid = (right + left) / 2;
		}
		if (arr[mid] > search)
		{
			right = mid - 1;
			mid = (right + left) / 2;
		}
		if (arr[mid] == search)
		{
			return mid;
			break;
		}
	}
}

void quickSort(int* arr, int left, int right) // Array quick sort algorithm 
{
	int pivot = arr[(right + left) / 2];
	int i = left, j = right;
	do
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j)
		{
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	} while (i < j);
	if (i < right) //if they did not go beyond the bounds of the array
		quickSort(arr, i, right);
	if (j > left)
		quickSort(arr, left, j);
}

void QuickSort(int* arr, int size) // Function of calling quick sort of an array
{
	quickSort(arr, 0, size - 1);
}

void BubleSort(int* arr, int size)
{
	int i, j, temp;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]); 
			}
		}
	}
}

bool isSorted(int* arr, int size) // sorted array check
{
	while (--size > 0)
		if (arr[size] < arr[size - 1])
			return false;
	return true;
}

void BogoSort(int* arr, int size)
{
	while (!isSorted(arr, size))
	{
		for (int i = 0; i < size; i++)
			swap(arr[i], arr[rand() % size]);
	}
}

void CountingSort(char* arr, int size)
{
	int max = arr[0], min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	int size2 = max - min;
	int* arr2 = new int[size2 + 1];
	for (int i = 0; i < size2 + 1; i++)
	{
		arr2[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		arr2[(int)arr[i] - min]++;
	}
	int counter = 0;
	if (arr2)
	{
		for (int i = 0; i < size2 + 1; i++)
			for (int j = 0; j < arr2[i]; j++)
			{
				arr[counter] = (char)i + min;
				counter++;
			}
	}

}
