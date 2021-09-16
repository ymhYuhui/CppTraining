#pragma once
class ComparisonSort
{
public:
	ComparisonSort(int* arr,int length) {
		this->mArray = arr;
		this->length = length;
	};
	~ComparisonSort() {};

	bool SelectionSort(bool isFromBigToSmall);
	bool InsertSort(bool isFromBigToSmall);

	void Print();

private:
	int* mArray;
	int length;
};

