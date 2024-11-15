#include <iostream>
using namespace std;

class Shape{

    int height ,width;

public:
    void setheight(int h){
        height = h;
    }
    void setwidth(int w){
        width = w;
    }
    int getheight(){
        return height;
    }
    int getwidth(){
        return width;
    }
};

int main(){
    Shape shape;
    shape.setheight(5);
    shape.setwidth(2);
    cout << "The Height is :" << shape.getheight() << endl;
    cout << "The Width is :" << shape.getwidth() << endl;
    return 0;
}

