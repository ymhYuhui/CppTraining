#pragma once
class ComparisonSort
{
public:
	ComparisonSort(int* arr, int length) {
		this->mArray = arr;
		this->length = length;
	};
	~ComparisonSort() {};

	bool SelectionSort(bool isFromBigToSmall);
	bool InsertSort(bool isFromBigToSmall);
	bool BubbleSort(bool isFromBigToSmall);
	bool ShellSort(bool isFromBigToSmall);
	void MergeSort(int start, int end);
	bool QuickSort(int* arr, int low, int high);


	bool SwapItem(int* p, int* q);
	void Print();

private:
	int* mArray;
	int length;

	void Merge(int start, int end, int mid);
	int Quick(int* arr, int low, int high);

};

