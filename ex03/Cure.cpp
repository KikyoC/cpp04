#include "Cure.hpp"
#include <AMateria.hpp>

Cure::Cure(const std::string &name): AMateria(name)
{

}

Cure::Cure(const Cure &cpy): AMateria(cpy)
{

}

Cure &Cure::operator=(const Cure &cpy)
{
	if (this != &cpy)
	{
		this->name = cpy.name;
	}
	return (*this);
}
