#include <iostream>
using namespace std;

int main(){
    int sum, n;
    cout << "Insert n: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    
    cout << "Sum of 1 to " << n << " is: " << sum;

    return 0;
}