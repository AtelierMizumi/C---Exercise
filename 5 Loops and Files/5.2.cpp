#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){
    int num;
    cout << "Insert a number: ";
    cin >> num;
    if (isPrime(num))
    {
        cout << num << " is a prime number";
    }
    else
    {
        cout << num << " is not a prime number";
    }
}