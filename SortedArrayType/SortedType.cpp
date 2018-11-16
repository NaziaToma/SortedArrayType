//SortedType.cpp
#include "SortedType.h"
#include <exception>
#include <iostream>
template <class ItemType>
SortedType<ItemType>::SortedType() {
	length = 0;
	currentPos = -1;
}
template<class ItemType>
SortedType<ItemType>::~SortedType() {
	MakeEmpty();
}
template<class ItemType>
bool SortedType<ItemType>::IsFull() {
	return (length == MAX_ITEMS);
}
template<class ItemType>
int SortedType<ItemType>::GetLength() {
	return length;
}
template<class ItemType>
void SortedType<ItemType>::MakeEmpty() {
	length = 0;
	currentPos = -1;
}
template<class ItemType>
bool SortedType<ItemType>::IsEmpty() {
	return (length == 0);
}template<class ItemType>
ItemType SortedType<ItemType>::GetItem(ItemType item, bool & found) {
	found = false;

	//Binary Search Algorithm
	int low = 0;
	int high = length - 1;
	int mid = (low + high) / 2;
	bool moreToSearch = (low <= high);
	while (moreToSearch && !found)
	{
		if (info[mid] == item)
		{
			found = true;
			return info[mid];
		}
		else if (item > info[mid])
			low = mid + 1;
		else
			high = mid - 1;
		moreToSearch = (low <= high);
		mid = (low + high) / 2;
	}
	return item;
}
template<class ItemType>
void SortedType<ItemType>::ResetList() {
	currentPos = -1;
}
template<class ItemType>
bool SortedType<ItemType>::HasNextItem() {
	return (currentPos < (length - 1));
}
template<class ItemType>
ItemType SortedType<ItemType>::GetNextItem() {
	currentPos++;
	return info[currentPos];
}template<class ItemType>
bool SortedType<ItemType>::PutItem(ItemType item) {
	if (IsFull())
		return false;
	int insertPosition = 0;
	for (int index = 0; index < length; index++) {
		if (info[index] > item) {
			insertPosition = index;
			break;
		}
		else {
			insertPosition++;
		}
	}
	//Moving all items to the right of insert position one step
	//to the right.
	for (int index = length; index > insertPosition; index--)
		info[index] = info[index - 1];
	info[insertPosition] = item;
	length++;
	return true;
}