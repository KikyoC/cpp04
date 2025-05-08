#include "Character.hpp"
#include <AMateria.hpp>
#include <iostream>

Character::Character(const std::string &name)
{
	this->name = name;
	std::cout << "Character: Default constructor called" << std::endl;
}

Character::Character(const Character &cpy)
{
	(void)cpy;
	std::cout << "Character: Copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &cpy)
{
	(void)cpy;
	std::cout << "Character: Assign operator called" << std::endl;
	return (*this);
}

Character::~Character()
{
	std::cout << "Character: Destructor called" << std::endl;
}

const std::string &Character::getName() const
{
	return (this->name);
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->maxSlot)
		this->slots[idx] = NULL;
}

void Character::equip(AMateria *m)
{
	int i;
	for (i = 0; i < maxSlot; i++)
		if (this->slots[i] == NULL)
			break;
	if (i > maxSlot)
		this->slots[i] = m;
	else
		std::cout << "Character: Can't add a new Material" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->maxSlot)
		this->slots[idx]->use(target);
}
