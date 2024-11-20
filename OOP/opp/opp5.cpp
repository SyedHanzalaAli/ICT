//polymorphism

#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    
    Student (){
        cout << "non parameterized\n";
    }

    Student (string name){
        this->name = name;
        cout << "Parameterized\n";
    }
};


//Compile time polymorphism 
//function overloading

class Print{
public:
  void show (int x){
    cout <<"int :"<< x << endl;
  }

  void show (char ch){
    cout << "char:" << ch << endl;
  }
};

int main (){
    Print p1;
    p1.show(101);
    p1.show('c');
    return 0;
}

//runtime polymorphism
//function overriding

class Parent {
public:
      void getinfo(){
        cout << "parent class\n";
      }
};

class Child: public Parent {
public:
      void getinfo(){
        cout << "child class\n";
      }
};

int main(){
    Child c1;
    c1.getinfo();

    return 0;
}

//virtual functions 

class Parent {
public:
      void getinfo(){
        cout << "parent class\n";
      }
      virtual void hello(){
        cout << "hello from parent";
      }
};

class Child: public Parent {
public:
      void getinfo(){
        cout << "child class\n";
      }
       void hello(){
        cout << "hello from child";
      }
};

int main(){
    Child c1;
    c1.hello();
    return 0;
}

//Abstraction
//Abstract Class

class Shape {//abstract class
    virtual void draw () =0; //pure virtual function
};

class circle :public Shape{
public:
    void draw(){
        cout<<"drawing a circle\n";
    }
};

int main(){

    return 0;
}

//static keyword
//in functions
void fun(){
    static int x =0;//initial statement runs once
    cout << "x :" << x << endl;
    x++;
}

int main(){
    fun();fun();fun();
    return 0;
}

//in class 

class ABC{
public:
    ABC(){
        cout << "constructor";
    }
    ~ABC(){
       cout << "destructor";
    }
};
int main(){
    if(true){
        static ABC obj;
    }
    return 0;
}