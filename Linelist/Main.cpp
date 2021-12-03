#include "LineList.h"
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Russian");
	LineList<int> list;
	cout << "Эрїрыю: " << list << endl;
	list.insertFirst(5);
	LineListElem<int>* ptr = list.getStart();
	list.insertAfter(ptr, 15);
	list.insertAfter(ptr->getNext(), 12);
	list.insertFirst(7);
	
	cout << "иру 1: " << list << endl;
	list.deleteAfter(ptr);
	list.deleteFirst();

	for (int i = 4; i > 0; i--)
	{
		list.insertFirst(i);
	}

	cout << "иру 2: " << list << endl;
	list.deleteAfter(ptr);

	cout << "иру 3: " << list << endl;


	return 0;
}