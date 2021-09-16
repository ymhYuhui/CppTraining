#include "ComparisonSort.h"
#include <iostream>


bool ComparisonSort::SelectionSort() {
	int* max = this->mArray;
	int current = 0;
	int* pmove = this->mArray;
	if (this->mArray == nullptr)
	{
		std::cout << "here is a null arr";
		return false;
	}

	for (int i = 0; i < this->length; i++)
	{
		pmove = this->mArray + i;
		max = this->mArray + i;

		for (int j = i; j < this->length; j++)
		{
			if (*max < *pmove)
			{
				max = pmove;
			}
			pmove++;
		}
		current = this->mArray[i];
		this->mArray[i] = *max;
		*max = current;

	}

	return true;
}

void ComparisonSort::Print() {

	for (int* p = this->mArray; p <= &this->mArray[this->length - 1]; p++)
	{
		std::cout << *p;
	}
}