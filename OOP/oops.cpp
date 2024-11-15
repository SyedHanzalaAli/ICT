#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    Teacher(){
        dept = "Computer Science";
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
    Teacher t1; //constructor call
    t1.name = "Hanzala";
    t1.subject = "Math";
    //t1.dept ="CS";
    t1.setSalary(25000);

    cout << t1.dept <<endl;
    return 0;
}