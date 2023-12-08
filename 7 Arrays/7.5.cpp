#include <iostream>
#include <vector>
using namespace std;

vector<int> intVectorCreator(){
    int i = 0, n;
    vector<int> intVector;
    while (true) {
        
        cout << "Enter element value or enter -1 to break: ";
        cin >> n;

        if (n==-1) {
            break; 
        } else if (n>=0) {
            intVector.push_back(n);
        } else {
            cout << "Please enter a valid value: ";
        };
    };
    return intVector;
};

void getAverageBetweenMaxAndMin(vector<int> intVector){
    int max = intVector.begin(), min = intVector.begin();
    for (const auto& element : intVector) {
        if (max < element) {
            max = element;
        }
        if (min > element) {
            min = element;
        }
    }
    cout << "Average of max and min: " << (max+min)/(float)2;
}

int main(){

    cout << "This program will find the average of the largest and smallest element in the array." << '\n';
    vector<int> result = intVectorCreator();
    getAverageBetweenMaxAndMin(result);

    return 0;
}