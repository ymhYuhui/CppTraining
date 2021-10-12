#include "Stack.h"
#include<iostream>

bool Stack::Push(StackItem* item) {

	if (item == NULL) {
		std::cout << "内存分配失败，新结点无法创建";
		return false;
	}
	if (phead->next == NULL) {
		phead->next = item;
	}
	else
	{
		item->next = phead->next;
		phead->next = item;
	}
}

StackItem* Stack::Pop() {
	StackItem* stackItem;
	if (phead->next == NULL)
	{
		std::cout << "是个空的stack";
		return NULL;
	}
	else
	{
		stackItem = phead->next;
		stackItem->next == NULL;

		if (phead->next->next == NULL)
		{
			phead->next = NULL;
		}
		else
		{
			phead->next = phead->next->next;
		}
	}
	return stackItem;
}

bool Stack::PrintValue() {

	StackItem* pMove = phead->next;
	if (!pMove) {
		std::cout << "栈为空";
		return false;
	}

	while (pMove) {
		std::cout << pMove->value << "\n";
		pMove = pMove->next;
	}
	return true;

}

bool Stack::Clear() {
	StackItem* pMove = phead->next;
	StackItem* pDel = phead->next;

	if (pMove == NULL) {
		std::cout << "栈为空";
		return false;
	}

	while (pMove) {
		std::cout << "删除" << pMove->value << "\n";
		pDel = pMove;
		pMove = pMove->next;
		/// <summary>
		/// 不加入73行的话会
		/// 0xDDDDDDDD - Deleted 引用的内存已经/对象被删除
		/// 需要把头节点的phead->next指过来
		/// </summary>
		/// <returns></returns>
		phead->next = pMove;

		delete pDel;
	}
	return true;
}