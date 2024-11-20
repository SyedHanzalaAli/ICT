#include <iostream>
#include <string>
using namespace std;
//inheritance
class Person{
public:
    string name;
    int age;

    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
    // Person(){
    //    cout << "Parent constructor\n";
    // }
    
};

class Student: public Person{
public:
    //name , age , rollno
    int rollno;

    Student(string name , int age , int rollno): Person(name ,age){
        //cout << "child constructor\n";
        this->rollno = rollno;
    }

    void getinfo(){
        cout << "name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "rollno :" << rollno << endl;
        
    }

};

int main(){
    Student s1("hanzala",21,1234);
    s1.getinfo();

    return 0;
}