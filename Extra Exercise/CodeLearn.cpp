#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "This program will calculate the sum of the first num and the last num in the array." << endl;
    cout << "Insert amount of element in the varieble: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Element number " << i+1 << " :";
        cin >> arr[i];
    };
    cout << "The sum of the first number and the last number in the array is: " << arr[0] + arr[n-1];

    return 0;
}