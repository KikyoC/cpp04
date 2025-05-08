#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	this->type = cpy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
	std::cout << "WrongCat: Assign constructor called" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meowwww...." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}
