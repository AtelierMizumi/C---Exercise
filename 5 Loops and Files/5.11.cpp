#include <iostream>
#include <string>
using namespace std;
int main(){
    int i, n, count;
    cout << "This program will print products of a num to words" << endl;
    cout << "Insert n: ";
    cin >> n;

    count = 0;
    long long temp = n;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    int digits[count];
    
    temp = n;
    for (i = count - 1; i >= 0; i--)
    {
        digits[i] = temp% 10;
        temp/=10;
    }
    
    cout << endl << "Digits in the number: " << endl;
    for (i = 0; i < count; i++)
    {
        cout << digits[i] << " ";
    }
    cout << "Digits in the number in words: ";
    for (i = 0; i < count; i++)
    {
        switch (digits[i])
        {
        case 1:
            cout << "one ";
            break;
        
        case 2:
            cout << "two ";
            break;
        case 3:
            cout << "three ";
            break;
        case 4:
            cout << "four ";
            break;
        case 5:
            cout << "five ";
            break;
        case 6:
            cout << "six ";
            break;
        case 7:
            cout << "seven ";
            break;
        case 8:
            cout << "eight ";
            break;
        case 9:
            cout << "nine ";
            break;
        case 0:
            cout << "zero ";
            break;
        }
    }
    return 0;
}
