#include "DoubleLink.h"
#include <iostream>

bool DoubleLink::AddAtHead(LinkItem* item) {


	if (item == NULL) {
		std::cout << "�ڴ����ʧ�ܣ��½���޷�����";
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

	if (item == NULL) {
		std::cout << "�ڴ����ʧ�ܣ��½���޷�����";
		return false;
	}
	LinkItem* last = phead;

	while (last->next != NULL) {
		last = last->next;
	}

	last->next = item;
	item->previous = last;
	return true;
}

bool DoubleLink::AddAtItem(int index, LinkItem* item) {
	LinkItem* pMove = phead;

	if (index < 0 || index > length) {
		std::cout << "������ȷ��ֵ";
		return false;
	}

	for (int i = 1; i <= index; i++) {
		pMove = pMove->next;
	}

	item->next = pMove;
	pMove->previous->next = item;
	item->previous = pMove->previous;
	pMove->previous = item;


	return true;
}

bool DoubleLink::Delete(int index) {
	LinkItem* pMove = phead;
	LinkItem* pDelete;

	if (index < 0 || index > length) {
		std::cout << "������ȷ��ֵ";
		return false;
	}

	for (int i = 1; i <= index; i++) {
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
	if (pMove == NULL) {
		std::cout << "����Ϊ��";
	}
	while (pMove) {
		if (pMove->value == value) {
			return pMove;
		}
		pMove = pMove->next;
	}
}

void DoubleLink::PrintValue() {

	LinkItem* pMove = phead->next;
	if (pMove == NULL) {
		std::cout << "����Ϊ��";
		return;
	}

	while (pMove) {
		std::cout << pMove->value << "\n";
		pMove = pMove->next;
	}


}

int DoubleLink::Getlength() {
	int i = 0;

	LinkItem* pMove = phead->next;
	if (pMove == NULL) {
		std::cout << "����Ϊ��";
		i = 0;
	}

	while (pMove) {
		pMove = pMove->next;
		i++;
	}

	return i;

}

bool DoubleLink::Clear() {
	int i = 0;

	LinkItem* pMove = phead->next;
	LinkItem* pDelete = pMove;

	if (pMove == NULL) {
		std::cout << "����Ϊ��";
		return false;
	}

	while (pMove) {
		pDelete = pMove;
		pMove = pMove->next;
		phead->next = pMove;
		delete pDelete;
	}
	return true;
}

