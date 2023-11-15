
#include <cmath>
#include <iostream>
using namespace std;

double derivative(double x, double y) {
    return y * std::pow(x, y - 1);
}

int main() {
    cout << "This program will calculate the derivative of a function" << endl;
    double x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    std::cout << "The derivative of " << x << "x^" << y << " at x = " << x << " is " << derivative(x, y) << std::endl;
    return 0;
}

