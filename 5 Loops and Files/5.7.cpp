#include <iostream>
using namespace std;

int main(){
    int n, i, sum;
    cout << "This program will calculate the sum of 1 to n." << endl;
    cout << "Insert n:";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        sum = sum + i;
    }
    
    cout << "Sum: " << sum;

    return 0;
}