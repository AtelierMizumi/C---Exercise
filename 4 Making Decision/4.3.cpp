#include <iostream>
using namespace std;

int main () {
    int day, month, year;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year (two digit format): ";
    cin >> year;

    if (day*month == year)
    {
        cout << "This date is magic";
    }
    else if (day*month != year)
    {
        cout << "This date is not magic";
    }
    
    return 0;
}