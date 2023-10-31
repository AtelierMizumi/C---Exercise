#include <iostream>
using namespace std;

int main () {
    int a,b,c;
    cout << "Enter three angles: ";
    cin >> a >> b >> c;
    if (a+b+c == 180)
    {
        cout << "This is a triangle";
    }
    else
    {
        cout << "This is not a triangle";
    }
    
    return 0;
}