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
	this->brain = new Brain(*cpy.brain);
}

Dog &Dog::operator=(const Dog &cpy)
{
	std::cout << "Dog: Assign constructor called" << std::endl;
	if (this != &cpy)
	{
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*cpy.brain);
		this->type = cpy.type;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouf...." << std::endl;
}

std::string Dog::getType() const
{
	return this->type;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->brain;
}
