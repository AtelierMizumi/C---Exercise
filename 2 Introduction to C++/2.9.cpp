//  a program that prompts for a user for two angles of a triangle and computes the third one.

#include <iostream>
using namespace std;

int main(){
    int angle1, angle2, angle3;
    cout << "Input the first angle of the triangle: ";
    cin >> angle1;
    cout << "Input the second angle of the triangle: ";
    cin >> angle2;

    angle3 = 180 - (angle1 + angle2);

    cout << "The third angle of the triangle is: " << angle3 << endl;
    return 0;
}
