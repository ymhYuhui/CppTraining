#include "DoubleLink.h"
#include <iostream>

bool DoubleLink::AddAtHead(LinkItem item) {

	LinkItem* newNode = new LinkItem(item);

	if (newNode == NULL) {
		std::cout << "内存分配失败，新结点无法创建";
		return false;
	}

	if (phead->next == NULL) {
		phead->next = newNode;
		newNode->previous = phead;
		return true;
	}
	else {
		newNode->next = phead->next;
		phead->next->previous = newNode;
		phead->next = newNode;
		newNode->previous = phead;
		return true;
	}

}

bool DoubleLink::AddAtTail(LinkItem item) {
	LinkItem* newNode = new LinkItem();

	if (newNode == nullptr) {
		std::cout << "内存分配失败，新结点无法创建";
		return false;
	}
	LinkItem* last = phead;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = newNode;
	newNode->previous = last;
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

int main() {

}


