#include <iostream>
using namespace std;

class Parent {
public:
    int x; // Public: Accessible everywhere
private:
    int y; // Private: Accessible only within Parent
protected:
    int z; // Protected: Accessible within Parent and derived classes
};

// Public inheritance
class Child1 : public Parent {
    // Inherited access specifiers:
    // x remains public
    // y is inaccessible (private in Parent)
    // z remains protected
public:
    void show() {
        x = 10; // Accessible
        z = 20; // Accessible (protected in Parent)
        cout << "Child1 - x: " << x << ", z: " << z << endl;
        // y = 30; // Error: y is private in Parent
    }
};

// Private inheritance
class Child2 : private Parent {
    // Inherited access specifiers:
    // x becomes private
    // y is inaccessible (private in Parent)
    // z becomes private
public:
    void show() {
        x = 15; // Accessible (now private in Child2)
        z = 25; // Accessible (now private in Child2)
        cout << "Child2 - x: " << x << ", z: " << z << endl;
        // y = 35; // Error: y is private in Parent
    }
};

// Protected inheritance
class Child3 : protected Parent {
    // Inherited access specifiers:
    // x becomes protected
    // y is inaccessible (private in Parent)
    // z remains protected
public:
    void show() {
        x = 12; // Accessible (now protected in Child3)
        z = 22; // Accessible (now protected in Child3)
        cout << "Child3 - x: " << x << ", z: " << z << endl;
        // y = 32; // Error: y is private in Parent
    }
};

int main() {
    Child1 obj1;
    obj1.show(); // Works because x is public in Child1
    obj1.x = 100; // Accessible (public in Parent)
    cout << "Modified x in obj1: " << obj1.x << endl;

    Child2 obj2;
    obj2.show(); // Works because x and z are private in Child2 and accessed via its methods
    // obj2.x = 200; // Error: x is private in Child2

    Child3 obj3;
    obj3.show(); // Works because x and z are protected in Child3 and accessed via its methods
    // obj3.x = 300; // Error: x is protected in Child3

    return 0;
}
