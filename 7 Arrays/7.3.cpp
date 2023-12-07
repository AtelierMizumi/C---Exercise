#include <iostream>
using namespace std;

int main(){
    int n, i, position, delta=0;

    cout << "Enter amount of elements in array: ";

\kiju    int array[n];
    for (i = 0; i < n; i++){
        cout << "Enter element number " << i+1 << " :";
        cin >> array[i]; 
    }
    cout << "Enter position in the array you want to delete: ";
    cin >> position;
    int modified_array[n-1];
    for (i = 0; i < n; i++){
        if (i == position){
            delta++;
        };
        modified_array[i-delta]=array[i];
    };
    for (i = 0; i < n-1; i++){
        cout << "Modified array index " << i << " is: " << modified_array[i] << endl;
    };

    return 0;
}