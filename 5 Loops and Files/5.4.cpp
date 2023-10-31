#include <iostream>
using namespace std;

int main(){
    int n, result;
    cout << "Insert n: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Invalid input. Please try again: ";
        cin >> n; 
    }
    
    for (int i = 1; i <= n; i++)
    {
        result = (result + (i*i));
    }

    cout << "Result: " << result;

    return 0;
}