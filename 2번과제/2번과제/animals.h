#ifndef animals_h_
#define animals_h_

#include "animal.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dog : public Animal
{
	Dog() {}
	void makesound()
	{
		cout << "Dog : Woof! Woof!" << endl;
	}
	~Dog() {}
};
class Cat : public Animal
{
	Cat() {}
	void makesound()
	{
		cout << "Cat : Meow! Meow!" << endl;
	}
	~Cat() {}
};
class Cow : public Animal
{
	Cow() {}
	void makesound()
	{
		cout << "Cow : Moo!" << endl;
	}
	~Cow() {}
};




#endif

