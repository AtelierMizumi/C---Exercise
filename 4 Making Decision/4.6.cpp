#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // write a program that finds all roots of a quadratic equation
    // ax^2 + bx + c = 0
    // if delta < 0, no root
    // if delta = 0, one root
    // if delta > 0, two roots

    int a,b,c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    int delta = b*b - 4*a*c;
    if (delta < 0)
    {
        cout << "No root";
    }
    else if (delta == 0)
    {
        cout << "One root: ";
        cout << -b/(2*a);
    }
    else if (delta > 0)
    {
        cout << "Two roots: ";
        cout << (-b+sqrt(delta))/(2*a) << " ";
        cout << (-b-sqrt(delta))/(2*a);
    }
    return 0;
}