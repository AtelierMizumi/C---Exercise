// write that prompts the user for height and width of a rectangle and compute the perimeter and area of the rectangle.

#include <iostream>
using namespace std;


int main(){
    double height, width, perimeter, area;
    cout << "Input the height and width of the rectangle: ";
    cin >> height >> width;

    perimeter = 2 * (height + width);
    area = height * width;

    cout << "The perimeter of the rectangle is: " << perimeter << endl;
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}

