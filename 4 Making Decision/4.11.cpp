#include <iostream>
using namespace std;

// a program to input all sides of the triagle and check if its equilateral, isosceles or scalene
int main(){
    int a, b, c;
    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0){
        if (a == b && b == c){
            cout << "The triangle is equilateral" << endl;
        } else if (a == b || b == c || a == c){
            cout << "The triangle is isosceles" << endl;
        } else {
            cout << "The triangle is scalene" << endl;
        }
        return 0;
    } else {
        cout << "Invalid input" << endl;
        return 1;
    }
}