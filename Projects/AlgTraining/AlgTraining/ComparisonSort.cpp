#include "ComparisonSort.h"
#include <iostream>


bool ComparisonSort::SelectionSort(int arr[], int length) {
	int max = *arr;
	int current = 0;
	int* pmove = arr;
	if (arr == nullptr)
	{
		std::cout << "here is a null arr";
		return false;
	}

	for (int i = 0; i < length; i++)
	{
		while (pmove != nullptr)
		{
			pmove++;
			if (max < *pmove)
			{
				max = *pmove;
				current = arr[i];
				arr[i] = max;
				max = current;
			}
		}
	}

	return true;
}

int ComparisonSort::GetLength(int* arr) {
	
	int Length = sizeof(arr) / sizeof(arr[0]);
	return Length;
}

//void ComparisonSort::Print(int arr[]) {
//	for (int* p = arr; p <= &arr[sizeof(arr) / sizeof(arr[0]) - 1]; p++)
//	{
//		std::cout << p ;
//	}
//}