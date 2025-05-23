#pragma once

#include "Animal.hpp"
#include <Brain.hpp>

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &cpy);
		Cat &operator=(const Cat &cpy);
		~Cat();

		void makeSound() const;
		Brain *getBrain() const;
	private:
		Brain *brain;
};
