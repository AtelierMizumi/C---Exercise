#include <iostream>
using namespace std;

int main(){
    int n, i, count;
    cout << "This program calculate products of a natural number." << endl;
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
        digits[i] = temp % 10;
        temp/=10;
    }

    cout << "Digits in the number: ";
    for (i = 0; i < count; i++)
    {
        cout << digits[i] << " ";
    }
    
    return 0;
}