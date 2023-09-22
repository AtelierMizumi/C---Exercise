#include <iostream>
using namespace std;

int main(){

    double rise_rate, ocean_level, ocean_level_inch, year;
    cout << "Tell me the average ocean rise rate in milimeter/year: ";
    cin >> rise_rate;
    cout << "Tell me the amout of years later: ";
    cin >> year;

    ocean_level = rise_rate * year / 10;
    ocean_level_inch = rise_rate * year / 10 / 2.54;
    cout << "The ocean level will be " << ocean_level << "cm(s) higher" << " and " << ocean_level_inch << "inch(es) higher.";
    return 0;
    
}