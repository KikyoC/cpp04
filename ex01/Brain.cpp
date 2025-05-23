#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
}

Brain &Brain::operator=(const Brain &cpy)
{
	std::cout << "Brain: Assign constructor called" << std::endl;
	if (this != &cpy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = cpy.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

std::string Brain::getIdea(int i) const
{
	if (i >= 100 || i < 0)
		return (NULL);
	return (this->ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
	if (i >= 100 || i < 0)
		return ;
	this->ideas[i] = idea;
}
