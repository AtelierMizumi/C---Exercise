#include <iostream>
using namespace std;

int main(){

    double v0, a, t;

    cout << "Insert your initial velocity, accelation and time: ";
    cin >> v0 >> a >> t;

    cout << "Final velocity after " << t << " second(s) is: " << v0 + (a*t);

    return 0;
}