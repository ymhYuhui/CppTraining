// AlgTraining.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "DoubleLink.h"
#include "Stack.h"
#include "ComparisonSort.h"
void DoubleLinkTest();
void SelectionSortTest();
void InsertSortTest();
void BubbleSortTest();
void MergeSortTest();
void StackTest();

int main() {
	//SelectionSortTest();
	//InsertSortTest();

	//BubbleSortTest();
	//MergeSortTest();

	StackTest();
}

void DoubleLinkTest() {
	DoubleLink* mLink = new DoubleLink();

	LinkItem* itemA = new LinkItem();
	itemA->value = 1;

	LinkItem* itemB = new LinkItem();
	itemB->value = 2;

	LinkItem* itemC = new LinkItem();
	itemC->value = 3;

	LinkItem* itemD = new LinkItem();
	itemD->value = 9;


	mLink->AddAtHead(itemA);
	mLink->AddAtHead(itemB);
	mLink->AddAtTail(itemC);
	mLink->length = mLink->Getlength();


	std::cout << "here is length\t" << mLink->length << "-------------- \n";


	mLink->PrintValue();

	std::cout << "here is AddAtItem-------------\n";
	mLink->AddAtItem(2, itemD);

	mLink->length = mLink->Getlength();
	std::cout << "here is length " << mLink->length << "--------------- \n";
	mLink->PrintValue();


	mLink->Delete(3);
	std::cout << "here is del------------- \n";
	mLink->PrintValue();


	std::cout << "here is Search \t" << mLink->Search(9)->value << "------------- \n";

	mLink->Clear();
	std::cout << "here is Clear \n";
	mLink->PrintValue();

	delete mLink;

}

void StackTest() {
	Stack* mStack = new Stack();

	StackItem* itemA = new StackItem();
	itemA->value = 1;

	StackItem* itemB = new StackItem();
	itemB->value = 2;

	StackItem* itemC = new StackItem();
	itemC->value = 3;

	StackItem* itemD = new StackItem();
	itemD->value = 9;


	mStack->Push(itemA);
	mStack->Push(itemB);
	mStack->Push(itemC);
	mStack->Push(itemD);


	std::cout << "here is length\t" << mStack->length << "-------------- \n";


	mStack->PrintValue();
	mStack->Pop();
	mStack->PrintValue();
	mStack->Pop();
	mStack->PrintValue();
	mStack->Clear();
	std::cout << "here is Clear \n";
	mStack->PrintValue();

	delete mStack;

}


#pragma region 排序算法的测试方法
void SelectionSortTest() {

	int testArr[10] = { 8,1,5,4,6,3,2,7,0,9 };

	ComparisonSort* mSelectionSort = new ComparisonSort(testArr, 10);

	std::cout << "testArr length is\t" << sizeof(testArr) / sizeof(testArr[0]) << "\n";

	mSelectionSort->Print();
	std::cout << "\n";
	mSelectionSort->SelectionSort(true);
	mSelectionSort->Print();

	std::cout << "\n";
	mSelectionSort->SelectionSort(false);
	mSelectionSort->Print();


	delete mSelectionSort;

}

void InsertSortTest() {

	int testArr[10] = { 8,1,5,4,6,3,2,7,0,9 };

	ComparisonSort* mInsertSort = new ComparisonSort(testArr, sizeof(testArr) / sizeof(testArr[0]));

	std::cout << "testArr length is\t" << sizeof(testArr) / sizeof(testArr[0]) << "\n";

	mInsertSort->Print();
	std::cout << "\n";

	mInsertSort->InsertSort(true);
	mInsertSort->Print();

	std::cout << "\n";
	mInsertSort->InsertSort(false);
	mInsertSort->Print();


	delete mInsertSort;

}

void BubbleSortTest() {

	int testArr[10] = { 8,1,5,4,6,3,2,7,0,9 };

	ComparisonSort* mBubbleSort = new ComparisonSort(testArr, sizeof(testArr) / sizeof(testArr[0]));

	std::cout << "testArr length is\t" << sizeof(testArr) / sizeof(testArr[0]) << "\n";

	mBubbleSort->Print();
	std::cout << "\n";

	mBubbleSort->BubbleSort(true);
	mBubbleSort->Print();

	std::cout << "\n";
	mBubbleSort->BubbleSort(false);
	mBubbleSort->Print();


	delete mBubbleSort;

}

void MergeSortTest() {

	int testArr[10] = { 8,1,5,4,6,3,2,7,0,9 };

	ComparisonSort* mMergeSort = new ComparisonSort(testArr, sizeof(testArr) / sizeof(testArr[0]));

	std::cout << "testArr length is\t" << sizeof(testArr) / sizeof(testArr[0]) << "\n";

	mMergeSort->Print();
	std::cout << "\n";

	mMergeSort->MergeSort(0, 9);
	mMergeSort->Print();

	std::cout << "\n";
	mMergeSort->MergeSort(0, 9);
	mMergeSort->Print();


	delete mMergeSort;

}

#pragma endregion



