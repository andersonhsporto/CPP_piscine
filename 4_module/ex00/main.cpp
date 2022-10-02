

#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	std::cout << "Getter: " << j->GetType() << " " << std::endl;
//	std::cout << "Getter: " << i->GetType() << " " << std::endl;
//	i->makeSound();
	j->makeSound();
    meta->makeSound();

    delete (meta);
    delete(j);
//    delete(i);
    return 0;
}