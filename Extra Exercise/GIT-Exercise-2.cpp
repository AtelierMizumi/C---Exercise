#include <iostream>
using namespace std;

int main(){
    int num, temp, result;
    
    cout << "This program will print out the smallest digit in the number." << endl;
    cout << "Insert your number: ";
    cin >> num;
    if (num >= 0)
    {
        result = 9;
        while (num > 0)
    {
        temp = num % 10;
        if (temp < result)
        {
            result = temp;
        }
        num /= 10;
    }
    cout << "The smallest number is: " << result;

    } else
    cout << "N";
    
    
    return 0;
}