#include <iostream>

using namespace std;

int main(){
    string input;
    cout << "Insert your string: ";
    cin >> input;
    int len = input.size();
    cout << "The length of the string is: " << len << endl;

    return 0;
}