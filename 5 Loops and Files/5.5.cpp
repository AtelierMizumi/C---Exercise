#include <iostream>
using namespace std;

int main(){

    cout << "This program will print out all the ASCII character from 48 to 127." << endl;
    
    for (int i = 48; i <= 127; i++)
    {
        cout << char(i);
    }

    return 0;
}