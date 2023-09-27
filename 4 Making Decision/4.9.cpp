// a program that prints out amount of day in that month of the year

#include <iostream>
using namespace std;

int main () {
    int month, year;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
    || month == 10 || month == 12)
    {
        cout << "31 days";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "30 days";
    }
    else if (month == 2)
    {
        if (year%4 == 0)
        {
            cout << "29 days";
        }
        else if (year%4 != 0)
        {
            cout << "28 days";
        }
    }
    
    return 0;
}