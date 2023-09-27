// a program check for the user input character is alphabet or number or special character

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z'){
        cout << "The character is an alphabet" << endl;
    } else if (ch >= '0' && ch <= '9'){
        cout << "The character is a number" << endl;
    } else {
        cout << "The character is a special character" << endl;
    }
    return 0;
}