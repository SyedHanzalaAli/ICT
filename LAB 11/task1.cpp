#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string name = "", int age = 0) : name(name), age(age) {}

    void setName(string name) {
        this->name = name;
    }

    string getName() const {
        return name;
    }

    void setAge(int age) {
        this->age = age;
    }

    int getAge() const {
        return age;
    }

    virtual void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    int employeeID;
public:
    Employee(string name, int age, int employeeID) : Person(name, age), employeeID(employeeID) {}

    void setEmployeeID(int employeeID) {
        this->employeeID = employeeID;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    void displayInfo() const override {
        Person::displayInfo();
        cout << "Employee ID: " << employeeID << endl;
    }
};

class Student : public Person {
private:
    int studentID;
public:
    Student(string name, int age, int studentID) : Person(name, age), studentID(studentID) {}

    void setStudentID(int studentID) {
        this->studentID = studentID;
    }

    int getStudentID() const {
        return studentID;
    }

    void displayInfo() const override {
        Person::displayInfo();
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Person p("John Doe", 40);
    Employee e("Jane Smith", 30, 101);
    Student s("Mark Johnson", 20, 1001);

    p.displayInfo();
    e.displayInfo();
    s.displayInfo();

    return 0;
}
