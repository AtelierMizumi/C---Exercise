#include <iostream>
#include <array>
using namespace std;

void charToInt(){
    int i, n;
    cout << "Insert amount of elements: ";
    cin >> n;
    
    char char_array[n];
    for (i = 0; i < n; i++)
    {
        cout << "Insert character at index " << i << " :";
        cin >> char_array[i];
    }
    
    int size = sizeof(char_array)/sizeof(char_array[0]);

    for (i = 0; i < size; i++)
    {
        cout << "The ASCII code of " << char_array[i] << " is " << static_cast<int>(char_array[i]) << endl;
    }   
}

void intToChar(){
    int i, n;
    cout << "Insert amount of elements: ";
    cin >> n;
    
    int int_array[n];
    for (i = 0; i < n; i++)
    {
        cout << "Insert integer at index " << i << " :";
        cin >> int_array[i];
    }
    
    int size = sizeof(int_array)/sizeof(int_array[0]);

    for (i = 0; i < size; i++)
    {
        cout << "The ASCII code of " << int_array[i] << " is " << static_cast<char>(int_array[i]) << endl;
    }
}

int main(){
    charToInt();
    intToChar();
    
    return 0;
}