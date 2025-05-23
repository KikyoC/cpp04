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
	cat.getBrain()->setIdea(1, "Manger");

	Cat cat2 = cat;
	cat2.getBrain()->setIdea(1, "Dormir");
	
	std::cout << "Cat 1 want \"" << cat.getBrain()->getIdea(1) << "\"" << std::endl;
	std::cout << "Cat 2 want \"" << cat2.getBrain()->getIdea(1) << "\"" << std::endl;

	// cat = cat2;
	std::cout << "Cat 1 want \"" << cat.getBrain()->getIdea(1) << "\"" << std::endl;
	return 0;
}
