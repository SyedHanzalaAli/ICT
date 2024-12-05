#include <iostream>
using namespace std;

double calculateBMI(double w , double h){
    return w/(h*h)*703;
}

string findStatus(double bmi){

    string status;
    if (bmi < 18.5)
    {
        status = "underweight";
    }
    else if(bmi < 25.0)
    {
        status = "normal"; // so on
    }
    return status;
}

int main(){

    double bmi,weight,height;
    string status;

    cout << "enter weight in pounds: ";
    cin >> weight;
    cout << "enter height in inches: ";
    cin >> height;

    bmi = calculateBMI(weight,height);

    cout << "your bmi is " << bmi << endl;
    cout << "your status is " << findStatus(bmi);

    return 0;

}