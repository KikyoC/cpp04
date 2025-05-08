#pragma once

#include "AMateria.hpp"


class Cure: public AMateria
{
	public:
		Cure(const std::string &name);
		Cure(const Cure &cpy);
		Cure &operator=(const Cure &cpy);
		~Cure();
	
};
