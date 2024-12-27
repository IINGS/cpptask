#ifndef animal_h_
#define animal_h_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
public:
	Animal() {}
	virtual void makeSound() const = 0;
	~Animal() {}
};


#endif