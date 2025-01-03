#ifndef SIMPLEVECTOR_H_
#define SIMPLEVECTOR_H_


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


template <typename T>

class SimpleVector
{
private:
	int currentSize = 0, currentCapacity = 0;
	T* mainarr;

public:
	SimpleVector() : currentCapacity(10), currentSize(0)
	{
		mainarr = new T[currentCapacity];
	}
	SimpleVector(int cap) : currentCapacity(cap), currentSize(0)
	{
		mainarr = new T[currentCapacity];
	}
	~SimpleVector()
	{
		delete[] mainarr;
	}

	void push_back(const T& pushipt)
	{
		if (currentSize < currentCapacity)
		{
			mainarr[currentSize] = pushipt;
			currentSize++;
		}
		else
		{
			currentCapacity += 5;
			mainarr[currentSize] = pushipt;
			currentSize++;
		}
	}
	void pop_back()
	{
		if (currentSize > 0)
		{
			currentSize--;
		}
		else
		{
			cout << "삭제할 원소가 없습니다." << endl;
		}
	}
	int size()
	{
		return currentSize;
	}
	int capacity()
	{
		return currentCapacity;
	}
	void resize(int newcap)
	{
		if (newcap > currentCapacity)
		{
			currentCapacity = newcap;
		}
		else
		{
			cout << "resize 인자가 현재 크기보다 작습니다. 현재 크기: " << currentCapacity << endl;
		}
	}
	void sortData()
	{
		sort(mainarr, mainarr+currentSize);
	}
	void print()
	{
		for (int i = 0; i < currentSize; i++)
		{
			cout << mainarr[i] << "  ";
		}
		cout << endl;
	}
};

#endif