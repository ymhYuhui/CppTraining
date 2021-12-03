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
	int gap = 0;
	return true;
}

void ComparisonSort::MergeSort(int start, int end) {
	int mid = start + (end - start) / 2;
	if (start >= end)
	{
		return;
	}
	MergeSort(start, mid);
	MergeSort(mid + 1, end);

	Merge(start, end, mid);
}

bool ComparisonSort::QuickSort(int* arr, int low, int high) {
	if (low < high)
	{
		int key = Quick(arr, low, high);
		QuickSort(arr, low, key - 1);
		QuickSort(arr, key + 1, high);
	}
	return true;
}
int ComparisonSort::Quick(int* arr, int low, int high) {

	int key = arr[low];
	while (low < high)
	{
		while (low < high && arr[high] >= key)
		{
			high--;
		}
		if (low < high)
		{
			arr[low] = arr[high];
		}
		while (low < high && arr[low] <= key)
		{
			low++;
		}
		if (low < high)
		{
			arr[high] = arr[low];

		}
	}
	 arr[low] = key ;

	return low;
}


void ComparisonSort::Merge(int start, int end, int mid) {
	int i = start, j = mid + 1, k = 0;
	int* temp = new int[end - start + 1];
	while (i <= mid && j <= end)
	{
		if (this->mArray[i] < this->mArray[j])
		{
			temp[k++] = this->mArray[i++];
		}
		else {
			temp[k++] = this->mArray[j++];
		}
	}

	while (i <= mid)
	{
		temp[k++] = this->mArray[i++];
	}
	while (j <= end)
	{
		temp[k++] = this->mArray[j++];
	}
	for (i = start, k = 0; i <= end; i++, k++) {
		this->mArray[i] = temp[k];
	}
	delete[]temp;
}

bool ComparisonSort::SwapItem(int* p, int* q) {
	int* temp = nullptr;
	temp = p;
	q = p;
	p = temp;
	return true;
}


void ComparisonSort::Print() {

	for (int* p = this->mArray; p <= &this->mArray[this->length - 1]; p++) {
		std::cout << *p;
	}
}