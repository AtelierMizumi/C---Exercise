#include <iostream>
using namespace std;

int main(){
    string s;
    cout << "Insert your string: ";
    getline(cin, s);

    cout << "The length of your string is: " << s.length();
    return 0;
}