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

bool ComparisonSort::InsertSort(bool isFromBigToSmall) {

	//int* pMove = this->mArray;
	//int current = *this->mArray;

	//if (this->mArray == nullptr) {
	//	std::cout << "here is a null arr";
	//	return false;
	//}

	//for (int i = 1; i <= this->length; i++) {
	//	pMove += (i - 1);
	//	current = *(this->mArray + i);

	//	while (&pMove >= &this->mArray && isFromBigToSmall ? *pMove > current:*pMove < current) {
	//		*(pMove + 1) = *pMove;
	//		pMove--;
	//	}


	//	*(pMove + 1) = current;
	//}
	//return true;
}

void ComparisonSort::Print() {

	for (int* p = this->mArray; p <= &this->mArray[this->length - 1]; p++) {
		std::cout << *p;
	}
}