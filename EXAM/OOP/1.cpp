#include "iostream"
using namespace std;

class Student
{
private:
    int rollNo; // private data member

public:
    // public function to get the value of RollNo - getter
    int getRollNo(){
        return rollNo;
    }
    //public function to set value for rollNo - setter
    void setRollNo(int i){
        rollNo =  i;
    }
};

int main(){
    Student A;
    A.setRollNo(1);
    cout << A.getRollNo();
}




