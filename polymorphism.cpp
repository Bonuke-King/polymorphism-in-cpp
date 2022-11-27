//polymorphism means many forms 
//it occurs when we have many classes that are related to each other by inheritance
//inheritance lets us inherit attributes and methods from another class
//polymorphism uses those methods to perform differnt tasks. This allows us to perform a single action in different ways.
//
////example think of a base class called animal that has a method called animalSound()
//Derived classes of animals could be pigs , cats , dogs , birds and they also have their own implementation of an animal sound (the pig oinks and the cat meows, etc.):
#include <iostream>
#include <string.h>
using namespace std;
//base class
class Animal {
public : //access specifier
void animalSound()
{
    cout <<" The animal makes a sound \n";
}

};

//Derived class
class Dog: public Animal{
public :
void animalSound()
{
    cout << "The dog says :bow wow \n";
}

};
//now we can create pig and dog objects and override the animalSound () method:
//Derived class 
class Pig : public Animal{
public :
void animalSound()
{
    cout << "The pig says:wee wee\n";
}

};
main()
{
Animal myAnimal;
Pig myPig;
Dog myDog;


myAnimal.animalSound();
myPig.animalSound();
myDog.animalSound();

return 0;
//why and when to use inheritance and polymorphism
//it is useful for code reusability:reuse attributes and methods of and existing class when 
//you create a new class
}
















































