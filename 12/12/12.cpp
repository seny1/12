#include "12.h"
#include <vector>

int main() 
{
	vector<Animal*> animals;
	int size; 
	cout << "Enter size of vector: ";
	cin >> size;
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		int r = rand() % 3 + 1;
		if (r == 1)
		{
			animals.push_back(new Dog("Sharik"));
		}
		else if (r == 2)
		{
			animals.push_back(new Cat("Pushok"));
		}
		else if (r == 3)
		{
			animals.push_back(new Parrot("Kesha"));
		}
	}
	for (int i = 0; i < size; i++)
	{
		animals[i]->sound();
	}

	cout << "--------------------------------------------------" << endl;
	int kick;
	cout << "Enter class wich you want delete(1 - Dog; 2 - Cat; 3 - Parrot): ";
	cin >> kick;
	cout << "--------------------------------------------------" << endl;

	for (int i = 0; i < size; i++)
	{
		if (kick == 1 and animals[i]->getName() == "Sharik")
		{
			animals[i] = new Nobody;
		}
		if (kick == 2 and animals[i]->getName() == "Pushok")
		{
			animals[i] = new Nobody;
		}
		if (kick == 3 and animals[i]->getName() == "Kesha")
		{
			animals[i] = new Nobody;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (!(animals[i]->getName() == " "))
		{
			animals[i]->sound();
		}
	}
}