#include <iostream>
using namespace std;

class car
{
private:
    int car_number;
    char car_model[10];

public:
    void getData(); // function declaration
    void showData();
};

// outside class function definition

void car::getData()
{

    cout << "enter car number: ";
    cin >> car_number;
    cout << "enter car model: ";
    cin >> car_model;
}

void car::showData()
{
    cout << "car number is " << car_number << endl;
    cout << "car model is " << car_model << endl;
}

//main 
int main(){

    car c1;
    c1.getData();
    c1.showData();

    return 0;
}