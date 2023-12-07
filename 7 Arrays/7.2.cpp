#include <iostream>
using namespace std;

int main(){
    int n, i, max;
    cout << "Enter amount of elements to compare: ";
    cin >> n;

    int number_array[n];

    for (i = 0; i < n; i++){
        cout << "Enter element number " << i+1 << " :";
        cin >> number_array[i]; 
    }

    max = number_array[0];
    for (i = 1; i < n; i++){
        if (max < number_array[i]){
            max = number_array[i];
        }
    }

    cout << "Maximum number in the array: " << max;

    return 0;
}