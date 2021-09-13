#include "DoubleLink.h"
#include <iostream>

bool DoubleLink::AddAtHead(LinkItem item) {

	LinkItem* newNode = new LinkItem(item);

	if (newNode == NULL) {
		std::cout << "�ڴ����ʧ�ܣ��½���޷�����";
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
		std::cout << "�ڴ����ʧ�ܣ��½���޷�����";
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
		std::cout << "������ȷ��ֵ";
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
	if (pMove == NULL)//����Ϊ��
	{
		std::cout << "����Ϊ��";
	}
	while (pMove)//��������
	{
		if (pMove->value == value) {
			return pMove;
		}
		pMove = pMove->next;
	}
}

int main() {

}

