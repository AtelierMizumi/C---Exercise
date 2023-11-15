#include <iostream>
using namespace std;

double getLength();
double getWidth();
void getArea();

double width, length, area;
char confirmation;

int main(){
    while (true)
    {
        getArea();
        cout << "Do you want to calculate again ? (y/n)" << endl;
        cin >> confirmation;

        if (confirmation == 'y') {
            break;
        } else if (confirmation == 'n') {
            return 0;
        } else {
            cout << "Please enter a valid choice" << endl;
        }
    }
    return 0;
}


double getWidth(){
    cout << "Enter rectangle's width: ";
    cin >> width;
    while (width <= 0)
    {
        cout << "Please enter a valid value:";
        cin >> width;
    }
    return width;
}
double getLength(){
    cout << "Enter rectangle's length: ";
    cin >> length;
    while (length <= 0)
    {
        cout << "Please enter a valid value: ";
        cin >> length;
    }
    return length;
}
void getArea(){
    area = getLength() * getWidth();
    cout << "The area of the rectangle is: " << area << endl;
}