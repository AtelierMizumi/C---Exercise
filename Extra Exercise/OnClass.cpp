#include <iostream>
using namespace std;

int main(){
    int i, min, total = 0;
    int array[4];
    cout << "Enter students test scores";

    for (i = 0; i < 4; i++){
        cout << "Enter test score number " << i+1 << " :";
        cin >> array[i];
    };

    for (i = 0; i < 4; i++){
        if (min > array[i]){
            min = array[i];
        }
    };

    for (i = 0; i < 4; i++){
        total = total+array[i];
    };

    int adjusted_total;
    adjusted_total=total-min;

    float adjusted_average;
    adjusted_average=adjusted_total/(float)3;
    cout << "Average score of the given student: " << adjusted_average;
    return 0;
}