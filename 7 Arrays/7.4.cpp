#include <iostream>
using namespace std;

void getAverage(double array[], int n);

int main(){
    int i, n;

    cout << "This program will calculate the average value of all element in the array." << '\n';
    cout << "Enter amount of element: ";
    
    cin >> n;
    double array[n];
    for (i = 0; i < n; i++) {
        cout << "Enter array value at index " << i << " :";
        cin >> array[i];        
    };

    getAverage(array, n);

    return 0;
}

void getAverage(double array[], int n){
    double sum, average;
    for (int i = 0; i < n; i++){
        sum+=array[i];
    }
    average=sum/(float)n;
    cout << "Average of all elements is: " << average;
}