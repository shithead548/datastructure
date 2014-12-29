#include <iostream>
#include "List.h"

/*
单链表的结点类型
*/

template <class T> class Link
{
public:
	T data;
	Link<T>* next;

	Link(const T info, const Link<T>* nextValue = NULL)
	{
		data = info;
		next = nextValue;
	}

	Link(const Link<T>* nextValue)
	{
		next = nextValue;
	}
};


/*
单链表类定义
*/
template <class T> class lnkList : public List <T>
{
private:
	Link<T>* head;
	Link<T>* tail;
	Link<T>* setPos(const int p);

public:
	lnkList(int s);
	~lnkList();
	bool isEmpty();
	void clear();
	int length();
	bool append(const T value);
	bool insert(const int p, const T value);
	bool remove(const int p);
	bool getValue(const int p, T& value);
	bool getPos(int &p, const T value);
};