#pragma once
class ComparisonSort
{
public:
	ComparisonSort(int* arr,int length) {
		this->mArray = arr;
		this->length = length;
	};
	~ComparisonSort() {};

	bool SelectionSort();

	int GetLength();
	void Print();

private:
	int* mArray;
	int length;
};

