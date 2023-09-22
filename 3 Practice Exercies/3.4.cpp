#include <iostream>

using namespace std;

int main(){
    double v0, v, a, t;
    
    cout << "Enter your start speed (v0): "; cin >> v0;
    cout << "Enter your accelaration (m/s): "; cin >> a;
    cout << "Enter the amount of time in seconds: "; cin >> t;
    
    v = v0 + a*t;
    cout << "The speed after " << t << " second(s) is " << v;

    return 0;
}