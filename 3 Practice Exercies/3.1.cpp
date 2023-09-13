// a program to input a character and print its ASCII value

#include <iostream>
using namespace std;

int main(){
    char character;
    cout << "Input a character: ";
    cin >> character;

    cout << "The ASCII value of " << character << " is " << int(character) << endl;
    return 0;
}
