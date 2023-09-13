// write a program that prompts the user for the radius of the circle and compute the perimeter and area of the circle

#include <iostream>
using namespace std;

int main(){
    double radius, perimeter, area;
    cout << "Input the radius of the circle: ";
    cin >> radius;

    perimeter = 2 * 3.14159 * radius;
    area = 3.14159 * radius * radius;

    cout << "The perimeter of the circle is: " << perimeter << endl;
    cout << "The area of the circle is: " << area << endl;
    return 0;
}
