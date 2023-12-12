// a program that prompts for the user's hours and minutes and print out the total number of minutes

#include <iostream>
using namespace std;

int main(){
    int hours, minutes, total_minutes;
    cout << "Input the number of hours: ";
    cin >> hours;
    cout << "Input the number of minutes: ";
    cin >> minutes;

    total_minutes = (hours * 60) + minutes;

    cout << "The total number of minutes is: " << total_minutes << endl;
    return 0;
}
