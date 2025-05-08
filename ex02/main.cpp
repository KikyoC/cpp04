#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	Cat *c = new Cat();
	Dog *d = new Dog();

	delete c;
	delete d;
}
