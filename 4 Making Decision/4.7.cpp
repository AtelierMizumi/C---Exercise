#include <iostream>
using namespace std;

int main() {

    int money;
    int converted_money;
    int type;

    cout << "Enter the amount of money in USD: ";
    cin >> money;
    cout << "What type of currency do you want to convert to ?" << endl;
    cout << "1. Euro" << endl << "2. Japanese Yen" << endl << "3. British Pound" << endl << "4. Vietnamese Dong" << endl;
    cin >> type;
    switch (type)
    {
    case (1):
        converted_money = money * 0.94;
        cout << "You've converted to: " << converted_money << " Euro";
        break;
    case (2):
        converted_money = money * 148.84;
        cout << "You've converted to: " << converted_money << " Japanese Yen";
    case (3):
        converted_money = money * 0.82;
        cout << "You've converted to: " << converted_money << " British Pound";
    case (4):
        converted_money = money * 24000;
        cout << "You've converted to: " << converted_money << " Vietnamese Dong";
    default:
        cout << "Please enter a valid input.";
        break;
    }

    return 0;
}