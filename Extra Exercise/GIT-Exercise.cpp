#include <iostream>
using namespace std;

int main(){

    int num, temp, even, sum = 0;

    cout << "This program will print out the number of even digits in the number." << endl;
    cout << "Insert your num: ";
    cin >> num;

    while (num > 0) {
        temp = num % 10;
        if (temp % 2 == 0) {
            sum++;
        }
        num /= 10;
    }
    cout << "Number of even number: " << sum;
    return 0;
}