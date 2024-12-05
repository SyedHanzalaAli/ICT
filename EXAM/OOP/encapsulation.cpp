#include <iostream>
using namespace std;

class Employee {
private:
    // Private data members
    string name;
    int age;
    double salary;

public:
    // Constructor to initialize data members
    Employee(string empName, int empAge, double empSalary) {
        setName(empName);
        setAge(empAge);
        setSalary(empSalary);
    }

    // Public method to set the name
    void setName(string empName) {
        if (!empName.empty()) {
            name = empName;
        } else {
            cout << "Name cannot be empty!" << endl;
        }
    }

    // Public method to get the name
    string getName() const {
        return name;
    }

    // Public method to set the age
    void setAge(int empAge) {
        if (empAge > 0) {
            age = empAge;
        } else {
            cout << "Age must be positive!" << endl;
        }
    }

    // Public method to get the age
    int getAge() const {
        return age;
    }

    // Public method to set the salary
    void setSalary(double empSalary) {
        if (empSalary >= 0) {
            salary = empSalary;
        } else {
            cout << "Salary must be non-negative!" << endl;
        }
    }

    // Public method to get the salary
    double getSalary() const {
        return salary;
    }

    // Public method to display employee details
    void displayInfo() const {
        cout << "Employee Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Create an Employee object
    Employee emp("John Doe", 30, 50000.00);

    // Access and modify data members using public methods
    emp.displayInfo();

    cout << "\nUpdating Employee Info..." << endl;
    emp.setName("Jane Smith");
    emp.setAge(28);
    emp.setSalary(60000.00);

    // Display updated details
    emp.displayInfo();

    return 0;
}
