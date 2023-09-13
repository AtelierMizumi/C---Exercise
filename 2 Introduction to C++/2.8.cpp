// a program that prompts the user for an integer and computes the number of years, months and days corresponding to that number of days., assuming that all month is 30 days and all year is 365 days

#include <iostream>
using namespace std;

int main(){
    int days, years, months, day;
    cout << "Input the number of days: ";
    cin >> days;

    years = days / 365;
    months = (days % 365) / 30;
    day = (days % 365) % 30;

    cout << "The number of years is: " << years << endl;
    cout << "The number of months is: " << months << endl;
    cout << "The number of days is: " << day << endl;
    return 0;
}
