#include <iostream>
#include <cmath>
using namespace std;

class Geometry {
public:
    double calculateArea(double side) {
        return side * side; // Area of square
    }

    double calculateArea(double length, double width) {
        return length * width; // Area of rectangle
    }

    double calculateArea(double radius) {
        return M_PI * radius * radius; // Area of circle
    }
};

int main() {
    Geometry g;
    
    cout << "Area of square with side 4: " << g.calculateArea(4.0) << endl;
    cout << "Area of rectangle with length 5 and width 3: " << g.calculateArea(5.0, 3.0) << endl;
    cout << "Area of circle with radius 7: " << g.calculateArea(7.0) << endl;

    return 0;
}
