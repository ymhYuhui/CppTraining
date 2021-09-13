#pragma once

struct LinkItem
{
	int value;
	LinkItem *previous;
	LinkItem *next;


	LinkItem() {};

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
		phead->previous = phead->next = phead;
		lenth = 0;
	};

	~DoubleLink() {};

	bool AddAtHead(LinkItem* item);
	bool AddAtTail(LinkItem* item);
	bool Delete(int index);
	void PrintValue();
	LinkItem* Search(int index);

private:
	int lenth;
	LinkItem *phead;

};



