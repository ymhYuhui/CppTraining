// AlgTraining.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "DoubleLink.h"

int main() {
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




// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
