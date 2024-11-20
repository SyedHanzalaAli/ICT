#include <iostream>
#include <string>
using namespace std;
//type of inheritance
// class Person{
// public:
//     string name;
//     int age;
// };

// class Student: public Person{
// public:
//     int rollno;
// };

// class gradstudent: public Student {
// public:
//     string ResearchArea; 
// };

class Student{
public:
    string name;
    int rollno;
};

class Teacher {
public:
   string subject;
   double salary; 
};

class TA : public Student , public Teacher{
public:
    string ResearchArea;
};

int main(){
    return 0;
}