#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


int main()
{
	Animal *animals[20];

	for (int i = 0; i < 10; i++)
		animals[i] = new Dog();
	for (int i = 10; i < 20; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 20; i++)
		delete animals[i];

	Cat cat = Cat();
	cat.brain->setIdea(1, "Manger");

	Cat cat2 = cat;

	cat2.brain->setIdea(2, "Dormir");
	std::cout << cat2.brain->getIdea(1) << std::endl;

	// delete cat;
	// delete cat2;

	return 0;
}
