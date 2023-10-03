// written in method() and obj way

#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
public:
    Circle(double radius){
        this->radius = radius;
    };
    double getRadius(){
        return radius;
    };
    void setArea(double r){
        radius = r;
    };
    void calcArea(){
        cout << "The area of the circle is: " << getRadius() * getRadius() * 3.1415 << endl;
    };
    void calcPerimeter(){
        cout << "The perimeter of the circle is: " << getRadius() * 2 * 3.1415 << endl;
    };
};


int main(){

    double radius;

    cout << "Insert your desired radius: ";
    cin >> radius;

    Circle firstCircle(radius);
    // call for method calcArea and calcPerimeter
    firstCircle.calcArea();
    firstCircle.calcPerimeter();

}