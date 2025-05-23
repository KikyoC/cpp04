#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->type = cpy.type;
}

Dog &Dog::operator=(const Dog &cpy)
{
	std::cout << "Dog: Assign constructor called" << std::endl;
	if (this != &cpy)
	{
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
}
