#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(const std::string &type)
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal()
{
	this->type = "Wrong";
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	this->type = cpy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal: Assign constructor called" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const 
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Uh I don't know what should I do..." << std::endl;
}
