#pragma once

#include <string>
class Animal
{
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &cpy);
		Animal &operator=(const Animal &cpy);
		virtual ~Animal();
	
		virtual void makeSound() const = 0;
		virtual std::string getType() const = 0;
	protected:
		std::string type;
};
