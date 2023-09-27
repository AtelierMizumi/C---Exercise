#include <iostream>
using namespace std;

int main () {
    double a,b;
    double area1, area2;
    cout << "Enter first rectangle width and height: ";
    cin >> a >> b;
    area1 = a*b;
    cout << "Enter second rectangle width and height: ";
    cin >> a >> b;
    area2 = a*b;
    if (area1>area2)
    {
        cout << "The first rectangle has the greater area";
    }
    else if (area1<area2)
    {
        cout << "The second rectangle has the greater area";
    }
    else if (area1==area2)
    {
        cout << "The two rectangles have the same area";
    }
    
    return 0;
}