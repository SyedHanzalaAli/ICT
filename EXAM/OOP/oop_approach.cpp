#include <iostream>
using namespace std;

class BMI
{
    double weight, height, bmi;
    string status;

public:
    void getInput()
    {
        cout << "enter weight in kilograms: ";
        cin >> weight;
        if (weight <= 0)
        {
            cout << "invalid" << endl;
            return;
        }
        cout << "Enter Height in inches : ";
        cin >> height;

        if (height <= 0)
        {
            cout << "invalid" << endl;
            return;
        }
    }

    double calculateBMI(){
        double heightinMeters =  height * 0.0254;

        if(weight > 0 && height > 0){
            bmi = weight/(heightinMeters*heightinMeters);
            return bmi;
        } 
        return -1;
    }

    string findStatus(){
        if (bmi <= 0){
            status = "invalid";
        }else if (bmi <18.5){
            status = "underweight";
        }else if (bmi >= 18.5 && bmi < 25.0){
            status = "normal";
        }else if (bmi >= 25.0 && bmi < 30){
            status = "overweight";
        }else {
            status = "obese";
        }
        return status;
    }

    void printStatus(){
        bmi = calculateBMI();

        cout << "your bmi "<<bmi<<endl;
        cout <<"your status "<<findStatus()<<endl;
    }
};

int main(){
    BMI bmi;
    bmi.getInput();
    bmi.printStatus();

    return 0;
}


