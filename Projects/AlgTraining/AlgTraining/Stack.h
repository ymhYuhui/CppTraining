#pragma once
#include <cstddef>

struct StackItem
{
	int value;
	StackItem* next;

	StackItem() {
		this->value = 0;
		this->next = nullptr;
	};

	StackItem(int value, StackItem* head) {
		this->value = value;
		this->next = next;
	}
};

class Stack
{
public:

	Stack() {
		phead = new StackItem();
		phead->next = NULL;
		length = 0;
	};
	~Stack() {};

	bool Push(StackItem* newItem);
	StackItem* Pop();
	bool Clear();
	bool PrintValue();

	int length;

private:
	StackItem* phead;
};

