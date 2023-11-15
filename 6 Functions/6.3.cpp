#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string divisionName;
double NE, SE, NW, SW;
double getSales(string);
void getHighest(double, double, double, double);


int main(){
    cout << "This program will determine which sale division has the greatest sales" << endl;
    NE = getSales("Northeast");
    SE = getSales("Southeast");
    NW = getSales("Northwest");
    SW = getSales("Southwest");
    getHighest(NE, SE, NW, SW);
    return 0;
}

double getSales(string divisionName){
    double sales;
    cout << "Enter the sales for the " << divisionName << " division: ";
    cin >> sales;
    while (sales < 0)
    {
        cout << "Sales cannot be negative. Please enter a positive number: ";
        cin >> sales;
    }
    return sales;
}

void getHighest(double NE, double SE, double NW, double SW){
    double highest;
    if (NE > SE && NE > NW && NE > SW)
    {
        highest = NE;
        divisionName = "Northeast";
    }
    else if (SE > NE && SE > NW && SE > SW)
    {
        highest = SE;
        divisionName = "Southeast";
    }
    else if (NW > NE && NW > SE && NW > SW)
    {
        highest = NW;
        divisionName = "Northwest";
    }
    else if (SW > NE && SW > SE && SW > NW)
    {
        highest = SW;
        divisionName = "Southwest";
    }
    cout << "The division with the highest sales is " << divisionName << " with $" << highest << endl;
}