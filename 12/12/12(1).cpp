#include "12.h"

void Cat::sound()
{
	cout << name << ": Meow" << endl;
}

void Dog::sound()
{
	cout << name << ": Woof" << endl;
}

void Parrot::sound()
{
	cout << name << ": Talk talk talk" << endl;
}

void Nobody::sound()
{
	cout << " " << endl;
}

string Animal::getName()
{
	return name;
}