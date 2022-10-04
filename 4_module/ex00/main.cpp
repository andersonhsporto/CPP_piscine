

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test();

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	std::cout << "Getter: " << j->GetType() << " " << std::endl;
	std::cout << "Getter: " << i->GetType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the dog sound!
    meta->makeSound();

    delete (meta);
    delete (j);
    delete (i);

    test();
    return 0;
}

void test()
{
    std::cout << "\n\n-------------\n\n" << std::endl;

    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongCat();

    std::cout << "Getter: " << meta->GetType() << " " << std::endl;
    std::cout << "Getter: " << j->GetType() << " " << std::endl;
    meta->makeSound(); //will output wrong default!
    j->makeSound(); //will output wrong cat!

    delete meta;
    delete j;
}