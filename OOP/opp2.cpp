#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaptr;

    Student(string name, double cgpa){
       this->name = name;
       cgpaptr = new double;
       *cgpaptr = cgpa;
    }
    Student(Student &obj){
       this->name = obj.name;
       cgpaptr = new double;
       *cgpaptr = *obj.cgpaptr;
    }
    //Destructor
    ~Student(){
        cout << "Delete everything\n";
        delete cgpaptr;
    }

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaptr<<endl;
    }
};

int main(){
    Student s1("Hanzala",4.0);   
    s1.getinfo();
    // Student s2(s1);//"Ali"
    // s1.getinfo();
    // *(s2.cgpaptr) = 3.2;
    // s1.getinfo();
    
    // s2.name = "Ali";
    // s2.getinfo();
    
    return 0;
}