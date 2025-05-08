#pragma once

#include <string>
class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal &operator=(const WrongAnimal &cpy);
		virtual ~WrongAnimal();
	
		void makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
};
