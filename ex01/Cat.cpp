#include "Cat.hpp"
#include <Brain.hpp>
#include <iostream>

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
		this->brain = new Brain(*cpy.brain);
		this->type = cpy.type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meowwww...." << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->brain;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete brain;
}
