#include <iostream>
using namespace std;

int Primorial(int n);
bool isPrime(int num);

#include <iostream>
using namespace std;

int Primorial(int n);
bool isPrime(int num);

int main(){
    int n;
    cout << "This program will calculate desired primorial." << endl;
    cout << "Enter num: ";
    cin >> n;

    int r  = Primorial(n);
    cout << r;
    return 0;
}

int Primorial(int n){
    int result = 1;
    int stage = 0;
    for (int i = 2; stage < n; i++)
    {
        if (isPrime(i))
        {
            result *= i;
            stage++;
        }
    }
    return result;
}

bool isPrime(int num){
    if (num <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;
 
    return true;
}