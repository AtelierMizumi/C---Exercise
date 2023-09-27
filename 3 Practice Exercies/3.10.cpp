#include <iostream>
#include <cmath>
using namespace std;

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num;
    int firstDigit, secondDigit;

    cout << "Enter a two digits number: ";
    cin >> num;

    firstDigit = num % 10;
    secondDigit = floor(static_cast<double>(num)/10);

    cout << firstDigit+secondDigit;

    return 0;
}