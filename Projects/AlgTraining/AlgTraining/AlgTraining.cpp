// AlgTraining.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "DoubleLink.h"
#include "ComparisonSort.h"
void DoubleLinkTest();
void SelectionSortTest();
void InsertSortTest();
void BubbleSortTest();

int main() {
	//SelectionSortTest();
	//InsertSortTest();

	BubbleSortTest();
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
	mLink->lenth = mLink->GetLenth();


	std::cout << "here is lenth\t" << mLink->lenth << "-------------- \n";


	mLink->PrintValue();

	std::cout << "here is AddAtItem-------------\n";
	mLink->AddAtItem(2, itemD);

	mLink->lenth = mLink->GetLenth();
	std::cout << "here is lenth " << mLink->lenth << "--------------- \n";
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

void SelectionSortTest() {

	int testArr[10] = { 8,1,5,4,6,3,2,7,0,9 };

	ComparisonSort* mSelectionSort = new ComparisonSort(testArr,10);

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

	ComparisonSort* mInsertSort = new ComparisonSort(testArr, sizeof(testArr) / sizeof(testArr[0]));

	std::cout << "testArr length is\t" << sizeof(testArr) / sizeof(testArr[0]) << "\n";

	mInsertSort->Print();
	std::cout << "\n";

	mInsertSort->BubbleSort(true);
	mInsertSort->Print();

	std::cout << "\n";
	mInsertSort->BubbleSort(false);
	mInsertSort->Print();


	delete mInsertSort;

}



