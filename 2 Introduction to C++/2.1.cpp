// a program that allow user to input 2 number and print out the sum of them

#include <iostream>

using namespace std;

int main(){
    int num1, num2, sum;

    cout << "Input your two numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "The sum of the two numbers is: " << sum << endl;
     
    return 0;
}