// a program that grades based on student's gpa, gpa = 0.2*quiz scores + 0.3* midterm + 0.5*final

#include <iostream>
using namespace std;

int main () {
    double quiz, midterm, final, gpa;
    cout << "Enter your quiz score: ";
    cin >> quiz;
    cout << "Enter your midterm score: ";
    cin >> midterm;
    cout << "Enter your final score: ";
    cin >> final;

    gpa = 0.2*quiz + 0.3*midterm + 0.5*final;

    if (gpa >= 8.5)
    {
        cout << "Your grade is A";
    }
    else if (gpa >= 7)
    {
        cout << "Your grade is B";
    }
    else if (gpa >= 5.5)
    {
        cout << "Your grade is C";
    }
    else if (gpa >= 4)
    {
        cout << "Your grade is D";
    }
    else if (gpa < 4)
    {
        cout << "Your grade is F";
    }

    return 0;
}