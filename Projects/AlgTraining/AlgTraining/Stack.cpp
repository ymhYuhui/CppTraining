#include "Stack.h"
#include<iostream>

bool Stack::Push(StackItem* item) {

	if (item == NULL) {
		std::cout << "�ڴ����ʧ�ܣ��½���޷�����";
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
		std::cout << "�Ǹ��յ�stack";
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
		std::cout << "ջΪ��";
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
		std::cout << "ջΪ��";
		return false;
	}

	while (pMove) {
		std::cout << "ɾ��" << pMove->value << "\n";
		pDel = pMove;
		pMove = pMove->next;
		/// <summary>
		/// ������73�еĻ���
		/// 0xDDDDDDDD - Deleted ���õ��ڴ��Ѿ�/����ɾ��
		/// ��Ҫ��ͷ�ڵ��phead->nextָ����
		/// </summary>
		/// <returns></returns>
		phead->next = pMove;

		delete pDel;
	}
	return true;
}