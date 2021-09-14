#pragma once
#include <cstddef>

struct LinkItem
{
	int value;
	LinkItem *previous;
	LinkItem *next;

	/// <summary>
	/// BugMark: 这里必须提前初始化指针
	/// </summary>
	LinkItem() {
		this->value = 0;
		this->previous = nullptr;
		this->next = nullptr;
	};

	LinkItem(int value, LinkItem *previous, LinkItem *next) {
		this->value = value;
		this->previous = previous;
		this->next = next;
	}
};


class DoubleLink
{
public:
	DoubleLink() {
		phead = new LinkItem();
		phead->previous = phead->next = NULL ;
		lenth = 0;
	};

	~DoubleLink() {};

	bool AddAtHead(LinkItem* item);
	bool AddAtTail(LinkItem* item);
	bool Delete(int index);
	bool AddAtItem(int index, LinkItem* item);

	void PrintValue();
	int GetLenth();
	bool Clear();
	int lenth;

	LinkItem* Search(int index);

private:
	LinkItem *phead;

};



