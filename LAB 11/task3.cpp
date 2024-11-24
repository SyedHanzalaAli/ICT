#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;
public:
    Animal(string name = "", int age = 0) : name(name), age(age) {}

    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Mammal : public Animal {
public:
    Mammal(string name, int age) : Animal(name, age) {}

    void feedBaby() const {
        cout << "Feeding baby mammal" << endl;
    }
};

class Bird : public Animal {
public:
    Bird(string name, int age) : Animal(name, age) {}

    void layEgg() const {
        cout << "Laying an egg" << endl;
    }
};

class Reptile : public Animal {
public:
    Reptile(string name, int age) : Animal(name, age) {}

    void shedSkin() const {
        cout << "Shedding skin" << endl;
    }
};

int main() {
    Mammal m("Lion", 5);
    Bird b("Parrot", 2);
    Reptile r("Snake", 3);

    m.displayInfo();
    m.feedBaby();

    b.displayInfo();
    b.layEgg();

    r.displayInfo();
    r.shedSkin();

    return 0;
}
