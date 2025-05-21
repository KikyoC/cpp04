#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->type = cpy.type;
	this->brain = new Brain(*cpy.brain);
}

Cat &Cat::operator=(const Cat &cpy)
{
	std::cout << "Cat: Assign constructor called" << std::endl;
	if (this != &cpy)
	{
		if (this->brain)
			delete this->brain;
		this->type = cpy.type;
		this->brain = new Brain(*cpy.brain);
	}
	return (*this);
}

std::string Cat::getType() const
{
	return this->type;
}

void Cat::makeSound() const
{
	std::cout << "Meowwww...." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete brain;
}
