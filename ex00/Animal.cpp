#include "Animal.hpp"
#include <iostream>

Animal::Animal(const std::string &type)
{
	std::cout << "Animal: Default constructor called" << std::endl;
	this->type = type;
}

Animal::Animal()
{
	this->type = "Wrong";
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	this->type = cpy.type;
}

Animal &Animal::operator=(const Animal &cpy)
{
	std::cout << "Animal: Assign constructor called" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}

std::string Animal::getType() const 
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Uh I don't know what should I do..." << std::endl;
}
