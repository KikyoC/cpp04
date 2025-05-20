#pragma once

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &cpy);
		Animal &operator=(const Animal &cpy);
		virtual ~Animal();
	
		virtual void makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
};
