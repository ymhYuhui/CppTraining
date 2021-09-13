#include "DoubleLink.h"
#include <iostream>

bool DoubleLink::AddAtHead(LinkItem* item) {

	//LinkItem* newNode = new LinkItem(item);

	if (item == NULL) {
		std::cout << "内存分配失败，新结点无法创建";
		return false;
	}

	if (phead->next == NULL) {
		phead->next = item;
		item->previous = phead;
		return true;
	}
	else {
		item->next = phead->next;
		phead->next->previous = item;
		phead->next = item;
		item->previous = phead;
		return true;
	}

}

bool DoubleLink::AddAtTail(LinkItem* item) {
	//LinkItem* newNode = new LinkItem();

	if (item == NULL) {
		std::cout << "内存分配失败，新结点无法创建";
		return false;
	}
	LinkItem* last = phead;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = item;
	item->previous = last;
	return true;
}

bool DoubleLink::Delete(int index) {
	LinkItem* pMove = phead;
	LinkItem* pDelete;

	if (index <0 || index>lenth) {
		std::cout << "输入正确的值";
		return false;
	}

	for (int i = 1; i <= index; i++)
	{
		pMove = pMove->next;
	}

	pDelete = pMove;

	pMove->previous->next = pDelete->next;
	pMove->next->previous = pDelete->previous;

	delete pDelete; 

	return true;
}

LinkItem* DoubleLink::Search(int value) {
	LinkItem* pMove = phead->next;
	if (pMove == NULL)//链表为空
	{
		std::cout << "链表为空";
	}
	while (pMove)//遍历链表
	{
		if (pMove->value == value) {
			return pMove;
		}
		pMove = pMove->next;
	}
}

void DoubleLink::PrintValue() {

	LinkItem* pMove = phead->next;
	if (pMove == NULL)//链表为空
	{
		std::cout << "链表为空";
	}
	while (pMove != NULL)//遍历链表
	{
		std::cout <<  pMove->value;
		pMove = pMove->next;	
	}
}


int main() {
	DoubleLink *mLink = new DoubleLink();
	LinkItem* itemA;
	itemA->value = 1;

	LinkItem* itemB;
	itemB->value = 2;

	LinkItem* itemC;
	itemC->value = 3;

	mLink->AddAtHead(itemA);
	mLink->AddAtHead(itemB);
	mLink->AddAtHead(itemC);
	mLink->PrintValue();

	delete mLink;
	
}


