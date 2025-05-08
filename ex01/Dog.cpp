#include "Dog.hpp"
#include <Brain.hpp>
#include <iostream>

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &cpy): Animal(cpy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->type = cpy.type;
	this->brain = new Brain();
	for (int i = 0; !cpy.brain->getIdea(i).empty(); i++)
		this->brain->setIdea(i, cpy.brain->getIdea(i));
}

Dog &Dog::operator=(const Dog &cpy)
{
	std::cout << "Dog: Assign constructor called" << std::endl;
	if (this != &cpy)
	{
		this->brain = new Brain();
		for (int i = 0; !cpy.brain->getIdea(i).empty(); i++)
			this->brain->setIdea(i, cpy.brain->getIdea(i));
		this->type = cpy.type;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouf...." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->brain;
}
