#include "SimpleVector.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	SimpleVector<int> spv(13);

	for (int i = 0; i < 11; i++)
	{
		spv.push_back(rand()%100);
	}
	cout << "Capacity: " << spv.capacity() << "  Size: " << spv.size() << endl;
	for (int i = 0; i < 3; i++)
	{
		spv.pop_back();
	}
	cout << "Capacity: " << spv.capacity() << "  Size: " << spv.size() << endl;
	spv.resize(15);
	cout << "Capacity: " << spv.capacity() << "  Size: " << spv.size() << endl;
	cout << "before sorting: ";
	spv.print();
	cout << endl;
	
	spv.sortData();
	cout << "after sorting: ";
	spv.print();
	cout << endl;
	return 0;
}
