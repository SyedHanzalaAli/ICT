//function overriding

#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual method to describe the sound an animal makes
    virtual void makeSound() {
        cout << "This animal makes a generic sound." << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding the makeSound method
    void makeSound() override {
        cout << "The dog barks!" << endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the makeSound method
    void makeSound() override {
        cout << "The cat meows!" << endl;
    }
};

int main() {
    Animal* animalPtr; // Pointer to base class

    Dog dog;
    Cat cat;

    // Pointing to a Dog object
    animalPtr = &dog;
    animalPtr->makeSound(); // Calls the overridden method in Dog

    // Pointing to a Cat object
    animalPtr = &cat;
    animalPtr->makeSound(); // Calls the overridden method in Cat

    return 0;
}
