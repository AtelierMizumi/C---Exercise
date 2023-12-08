#include <iostream>
#include <cmath>
using namespace std;

int getRadius() {
    int a;
    cout << "Enter the value of radius: ";
    cin >> a;
    return a;
}

double square(int radius) {
    return radius * radius * M_PI;
}

int main() {
    int radius = getRadius();
    cout << "Area is: " << square(radius) << endl;

    return 0;
}