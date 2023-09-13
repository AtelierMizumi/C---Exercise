// a program that swap 2 variables

#include <iostream>
using namespace std;

int main(){
    int num1, num2, temp;
    cout << "Input your desired set of numbers: ";
    cin >> num1 >> num2;

    // num switch method
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Here's your swaped variables: " << num1 << " - " << num2;
    return 0;
}