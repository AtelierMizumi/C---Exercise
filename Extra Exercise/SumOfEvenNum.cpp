#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int n;

    cout << "This program will calculate the sum of even number from 0 to n" << endl;
    cout << "Insert n: ";
    cin >> n;

    for (int i = 0; i <= n; i += 2)
    {
        sum+=i;
    };
    
    cout << "Result: " << sum;
    return 0;
}