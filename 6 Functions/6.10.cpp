#include <iostream>
#include <cmath>
using namespace std;

bool isPolydivisible(int num);

int main(){
    do
    {
        int num;

        cout << "This program check if the number is Polydivisible or not." << endl;
        cout << "Press Ctrl + C to stop the program." << endl;
        cout << "Enter number: ";
        cin >> num;

        bool q = isPolydivisible(num);
        if (q)
        {
            cout << "The number " << num << " is polydivisible." << endl;
        } else {
            cout << "The number " << num << " is not polydivisible." << endl;
        };

    } while (true);

    return 0;
}

bool isPolydivisible(int num){
    int temp, digits=0, numClone=num, localNum=num;

    if (numClone <= 0) {
        return false;
    } // only take positive number

    while (numClone) {
        numClone /= 10;
        digits++;
    } // get number's digits
    
    cout << "Digits: " << digits << endl;

    for (int i = 1; i <= digits; i++)
    {
        temp = localNum / pow(10, digits - i);

        if (temp%i!=0)
        {
            return false;
            break;
        }
    }
    return true;
};