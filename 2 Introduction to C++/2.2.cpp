// A program that compute the tax and tip on a restaurant bill

#include <iostream>

using namespace std;

int main(){
    
    double tax_percent, tip_percent, cost, finale_bill;
    double tax, tip;

    cout << "Type in your meal cost, tax rate and tip rate: ";
    cin >> cost >> tax_percent >> tip_percent;

    tax = (cost*tax_percent/100);
    tip = (cost*tip_percent/100);
    finale_bill = tax + tip + cost;
    cout << "Your meal cost: $" <<  cost << endl;
    cout << "Your tax: $" << tax << endl;
    cout << "Your tip: $" << tip << endl;
    cout << "Your total: $" << finale_bill << endl;

    return 0;
}