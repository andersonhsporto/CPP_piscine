

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test()
{
    std::cout << "\n>>>>>\tWRONG ANIMAL TEST\t<<<<<\n" << std::endl;

    const WrongAnimal* animalErrado = new WrongAnimal();
    const WrongAnimal* gatoErrado = new WrongCat();

    std::cout << "Getter: " << animalErrado->GetType() << " " << std::endl;
    std::cout << "Getter: " << gatoErrado->GetType() << " " << std::endl;

    animalErrado->makeSound();
    gatoErrado->makeSound();

    delete(animalErrado);
    delete(gatoErrado);
}

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "Getter: " << j->GetType() << " " << std::endl;
	std::cout << "Getter: " << i->GetType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

    delete(meta);
    delete(j);
    delete(i);

    test();
	return 0;
}