#pragma once

#include "Animal.hpp"
#include <Brain.hpp>

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &cpy);
		Dog &operator=(const Dog &cpy);
		~Dog();

		void makeSound() const;
	private:
		Brain *brain;
};
