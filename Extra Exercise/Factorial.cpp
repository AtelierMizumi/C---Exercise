#include <iostream>
using namespace std;

int main(){
    int n, factorial = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial*i;
    }
    cout << "Factorial: " << factorial;
}