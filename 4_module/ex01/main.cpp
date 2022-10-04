

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

Animal **arrayFactory(int size);
void deleteAnimal(Animal **animals, int size);
void deepCopyTest();

int main()
{
    int size = 10;
    Animal **animals = arrayFactory(size);

    deleteAnimal(animals, size);
    deepCopyTest();
    return 0;
}

Animal **arrayFactory(int size)
{
    Animal **animals = new Animal*[size];

    for (int i = 0; i < size; i++)
    {
        if (i < (size / 2))
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    return animals;
}

void deleteAnimal(Animal **animals, int size)
{
    for (int i = 0; i < size; i++)
        delete animals[i];
    delete[] animals;
}

void deepCopyTest()
{
    Cat *cat = new Cat("I am a cat");
    Cat *deepCopyCat = new Cat(*cat);
    Dog *dog = new Dog("I am a dog");
    Dog *deepCopyDog = new Dog(*dog);

    deepCopyCat->GetBrain()->printIdeas();
    deepCopyDog->GetBrain()->printIdeas();
    delete cat;
    delete deepCopyCat;
    delete dog;
    delete deepCopyDog;
}
