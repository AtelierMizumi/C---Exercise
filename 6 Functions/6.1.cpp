#include <iostream>
using namespace std;

double CalculateRetail(){
    double wholesale, markup_percent;
    cout << "Enter your item's wholesale and markup percentage:" << endl;
    cout << "Wholesale: ";
    cin >> wholesale;
    cout << "Markup percent: ";
    cin >> markup_percent;
    
    return wholesale + wholesale * markup_percent/100;
}

int main(){
    char confirmation;

    while (true) {
        double retailPrice;

        retailPrice = CalculateRetail();
        cout << "Retail price of the item: " << retailPrice << endl;
        
        while (true) {
            cout << "Do you want to calculate another item ? (y/n) :";
            cin >> confirmation;
            if (confirmation == 'y' || confirmation == 'Y') {
                break;
            } else if (confirmation == 'n' || confirmation == 'N') {
                return 0;
            } else {
                cout << "Please enter a valid choice." << endl;
            }
        }
    }

    return 0;
}
