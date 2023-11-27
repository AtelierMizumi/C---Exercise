#include <iostream>
using namespace std;

int CandyParcel(int nBigAvailable, int nSmallAvailable, int CandyNeeded);

int main(){

    int nBigAvailable, nSmallAvailable, CandyNeeded, SmallCandy;

    cout << "This program takes 3 parameter." << endl;
    cout << "nSmall: amount of small candy parcel available (2 candies per parcel)" << endl;
    cout << "nBig: amount of small candy parcel available (5 candies per parcel)" << endl;
    cout << "Amount of candy package needed" << endl;
    cout << "The program will return amount of small parcel needed" << endl;
    cout << "to achieve that amount of candy for the package" << endl;
    cout << "If not possible, returns -1" << endl;

    cout << "Enter nBig: ";
    cin >> nBigAvailable;
    cout << "Enter nSmall: ";
    cin >> nSmallAvailable;
    cout << "Enter candies wanted: ";
    cin >> CandyNeeded;

    SmallCandy << CandyParcel(nBigAvailable, nSmallAvailable, CandyNeeded);

    return 0;
}

int CandyParcel(int nBigAvailable, int nSmallAvailable, int CandyNeeded){
    int NumberOfSmallParcel = 0;
    int NumberOfBigParcel = 0;
    int CandyNeededLeft = CandyNeeded;

    while (NumberOfBigParcel*5 < CandyNeededLeft && NumberOfBigParcel <= nBigAvailable)
    {
        NumberOfBigParcel++;
    };
    NumberOfBigParcel--; // Need 17, 3*15 < 17 -> Num++, NumberOfBigParcel is now 4 which is 20 candies

    CandyNeededLeft=CandyNeededLeft-NumberOfBigParcel*5;
    while (NumberOfSmallParcel*2 < CandyNeededLeft)
    {
        NumberOfSmallParcel++;
    };

    if (NumberOfSmallParcel > nSmallAvailable){
        cout << "Not enough small candy parcel to fulfill request." << endl;
        cout << "BigParcel: " <<  NumberOfBigParcel << ", SmallParcel: " << NumberOfSmallParcel;
        return -1;
    };

    if ((NumberOfBigParcel*5 + NumberOfSmallParcel*2) != CandyNeeded){
        cout << "Cant make any combination that adds up to: " << CandyNeeded << endl;
        cout << "BigParcel: " <<  NumberOfBigParcel << ", SmallParcel: " << NumberOfSmallParcel;
        return -1;
    } else {
        cout << "BigParcel: " <<  NumberOfBigParcel << ", SmallParcel: " << NumberOfSmallParcel << endl;
        cout << "Required number of small candy: " << NumberOfSmallParcel*2 << endl;
        return NumberOfSmallParcel*2;
    };
}