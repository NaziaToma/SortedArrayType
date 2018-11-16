//SortedType.h
#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
#define MAX_ITEMS 5
template <class ItemType>
class SortedType
{
public:
	SortedType();
	~SortedType();
	bool IsFull();
	int GetLength();
	void MakeEmpty();
	bool IsEmpty();
	ItemType GetItem(ItemType item, bool& found);
	bool PutItem(ItemType item);
	bool DeleteItem(ItemType item);
	//Iterator Operations
	void ResetList();
	bool HasNextItem();
	ItemType GetNextItem();
private:
	int length;
	ItemType info[MAX_ITEMS];
	int currentPos;
};
#endif 