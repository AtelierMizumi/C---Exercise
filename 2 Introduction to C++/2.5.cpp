// write a program that prompts a user for two integers and performs all arithmetic operations on them.

#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Input your desired set of numbers: ";
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << (float)num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    return 0;
}
