#include <iostream>
using namespace std;

int main(){

    int n, delta = 0, element, position;

    cout << "Enter array size: ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element at index " << i << " :";
        cin >> array[i]; 
    };

    cout << "Enter element you want to insert: ";
    cin >> element;
    cout << "Enter position (not index) you want to insert: ";
    cin >> position;

    int new_array[n+1];
    for (int i = 0; i < n+1; i++)
    {
        if (i!=position-1)
        {
            new_array[i+delta]=array[i];
        } else {
            delta++;
            new_array[i-delta]=element;
        }
    }
    
    for (int i = 0; i < n+1; i++)
    {
        cout << new_array[i] << " ";
    };
    

    return 0;
}