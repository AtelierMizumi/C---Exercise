#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double deg;
    cout << "Insert the degree of the angle: ";
    cin >> deg;
    double rad = deg * 3.1415/180;
    
    cout << "Cos: " << cos(rad) << ", Sine: " << sin(rad) << ", Tan: " <<  tan(rad) << ", Cotan: " << (cos(rad)/sin(rad));

    return 0;
}