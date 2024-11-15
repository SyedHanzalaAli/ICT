#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    // //non parameterized constructor
    // Teacher(){
    //     dept = "Computer Science";
    // }

    //parameterized
    Teacher(string name ,string dept , string subject , double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //copy constructor
    Teacher (Teacher &Orgobj){//by reference
        cout << "i am custom copy constructo...\n";
        this->name = Orgobj.name;
        this->dept = Orgobj.dept;
        this->subject = Orgobj.subject;
        this->salary = Orgobj.salary;
    }

    //properties/attributes
    string name;
    string dept;
    string subject;
    //methods/member functions
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }
    void getinfo(){
        cout << "name :" << name <<endl;
        cout << "subject :" << subject << endl;
    }
};

// class Account{
// private:
//     double balance;
//     string password;//data hiding
// public:
//     string accountID;
//     string username;
// };

int main(){
    Teacher t1("Hanzala","CS","Math",25000);
    // t1.getinfo();

    Teacher t2(t1); //custom copy constructor invoked
    t2.getinfo();

    // Teacher t1; //constructor call
    // t1.name = "Hanzala";
    // t1.subject = "Math";
    // //t1.dept ="CS";
    // t1.setSalary(25000);
    // cout << t1.dept <<endl;
    return 0;
}