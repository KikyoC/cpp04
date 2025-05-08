#include "Character.hpp"

int main()
{

	const std::string &name = "John";
	Character *c = new Character(name);

	delete c;
	return 0;
}
