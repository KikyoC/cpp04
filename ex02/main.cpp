#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	Cat *c = new Cat();
	Dog *d = new Dog();
	// Animal *a = new Animal();

	delete c;
	delete d;
}
