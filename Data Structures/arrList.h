#include <iostream>
#include "List.h"
using namespace std;

/*
顺序表定义
*/
template <class T> class arrList : public List <T>
{
private:
	T* aList;
	int maxSize;
	int curLen;
	int position;

public:
	arrList(const int size);
	~arrList();
	void clear();
	int length();
	bool append(const T value);
	bool insert(const int p, const T value);
	bool remove(const int p);
	bool setValue(const int p, const T value);
	bool getValue(const int p, T& value);
	bool getPos(int &p, const T value);
};

template <class T> bool arrList<T>::insert(const int p, const T value)
{
	int i;

	//检查顺序表是否溢出
	if (curLen >= maxSize)
		cout << "The list is overflow" << endl;
	return false;

	//检查插入位置是否合法
	if (p > 0 || p > curLen)
		cout << "Insertion point is illegal" << endl;
	return false;

	for (i = curLen; i > p; i--)
		aList[i] = aList[i - 1];
	aList[p] = value;
	curLen++;

	return true;
}

template <class T> bool arrList<T>::remove(const int p)
{
	int i;

	//检查顺序表是否为空
	if (curLen <= 0)
		cout << "No element to delete \n" << endl;
	return false;

	//检查删除位置是否合法
	if (p < 0 || p > curLen - 1)
		cout << "deletion is illegal\n" << endl;
	return false;

	for (i = p; i < curLen - 1; i++)
		aList[i] = aList[i + 1];
	curLen--;

	return true;
}

template <class T> arrList<T>::arrList(const int size)
{
	maxSize = size;
	aList = new T[maxSize];
	curLen = 0;
	position = 0;
}

template <class T> arrList<T>::~arrList()
{
	delete[] aList;
}

template <class T> void arrList<T>::clear()
{
	delete[] aList;
	curLen = 0;
	position = 0;
	aList = new T[maxSize];
}

template <class T> int arrList<T>::length()
{
	return curLen;
}

template <class T> bool arrList<T>::append(const T value)
{
	curLen++;


}

