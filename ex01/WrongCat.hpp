#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &cpy);
		WrongCat &operator=(const WrongCat &cpy);
		~WrongCat();

		void makeSound() const;
};
