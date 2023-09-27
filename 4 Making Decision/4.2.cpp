#include <iostream>
using namespace std;

int main () {
    int x;
    cout << "Enter your number (1-10): ";
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Roman number: I";
        break;
    case 2:
        cout << "Roman number: II";
        break;
    case 3:
        cout << "Roman number: III";
        break;
    case 4:
        cout << "Roman number: IV";
        break;
    case 5:
        cout << "Roman number: V";
        break;
    case 6:
        cout << "Roman number: VI";
        break;
    case 7:
        cout << "Roman number: VII";
        break;
    case 8:
        cout << "Roman number: VIII";
        break;
    case 9:
        cout << "Roman number: IX";
        break;
    case 10:
        cout << "Roman number: X";
        break;    
    default:
        cout << "Please enter a number from 1 to 10";
        break;
    }

    return 0;
}