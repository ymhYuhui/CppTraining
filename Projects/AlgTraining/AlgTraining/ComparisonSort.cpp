#include "ComparisonSort.h"
#include <iostream>


bool ComparisonSort::SelectionSort(bool isFromBigToSmall) {

	int current = 0;

	int* extreme = this->mArray;
	int* pMove = this->mArray;

	if (this->mArray == nullptr) {
		std::cout << "here is a null arr";
		return false;
	}

	for (int i = 0; i < this->length; i++) {
		pMove = this->mArray + i;
		extreme = this->mArray + i;

		for (int j = i; j < this->length; j++) {
			if (isFromBigToSmall ? *extreme < *pMove : *extreme > *pMove) {
				extreme = pMove;
			}
			pMove++;
		}
		current = this->mArray[i];
		this->mArray[i] = *extreme;
		*extreme = current;
	}

	return true;
}

bool ComparisonSort::BubbleSort(bool isFromBigToSmall) {
	int current = 0;
	for (int i = 0; i < this->length; i++) {
		for (int j = 0; j < this->length - i - 1; j++) {
			if (isFromBigToSmall ? this->mArray[j] < this->mArray[j + 1] : this->mArray[j] > this->mArray[j + 1]) {
				current = this->mArray[j];
				this->mArray[j] = this->mArray[j + 1];
				this->mArray[j + 1] = current;
			}
		}
	}
	return true;
}

bool ComparisonSort::InsertSort(bool isFromBigToSmall) {

	for (int j = 1; j < this->length; j++)
	{
		int key = this->mArray[j];
		int i = j - 1;
		while (i >= 0 && isFromBigToSmall ? key > this->mArray[i] : key < this->mArray[i])
		{
			this->mArray[i + 1] = this->mArray[i];
			i--;
		}
		this->mArray[i + 1] = key;
	}
	return true;
}


bool ComparisonSort::ShellSort(bool isFromBigToSmall) {

}
void ComparisonSort::Print() {

	for (int* p = this->mArray; p <= &this->mArray[this->length - 1]; p++) {
		std::cout << *p;
	}
}