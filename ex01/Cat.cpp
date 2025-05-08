#include "Cat.hpp"
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
	this->brain = new Brain();
	for (int i = 0; !cpy.brain->getIdea(i).empty(); i++)
		this->brain->setIdea(i, cpy.brain->getIdea(i));
}

Cat &Cat::operator=(const Cat &cpy)
{
	std::cout << "Cat: Assign constructor called" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
		this->brain = new Brain();
		for (int i = 0; !cpy.brain->getIdea(i).empty(); i++)
			this->brain->setIdea(i, cpy.brain->getIdea(i));
	}
	return (*this);
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
