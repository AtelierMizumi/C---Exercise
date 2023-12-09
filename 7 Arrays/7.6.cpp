#include <iostream>
#include <vector>
using namespace std;

vector<int> intVectorCreator(){
    int n;
    vector<int> intVector;
    while (true){
        cout << "Enter element's value or enter -1 to break: ";
        cin >> n;
        if (n==-1){
            break;
        } else if (n==0){
            cout << "Zero is neither even or odd. \n";
            cin >> n;
        } else if (n>0){
            intVector.push_back(n);
        } else {
            cout << "Please enter a valid value. \n";
        }
    };
    return intVector;
};

double findAverageOdd(vector<int> intVector){
    int sum = 0;
    int count = 0;

    for (int x:intVector){
        if (x%2==1){
            sum+=x;
            count++;
        };
    };
    return sum/(double)count; 
};

double findAverageEven(vector<int> intVector){
    int sum = 0;
    int count = 0;

    for (int x:intVector){
        if (x%2==0){
            sum+=x;
            count++;
        };
    };
    return sum/(double)count; 
};

int main(){

    cout << "This program will find the average of odd number and the average of even number in the array vector. \n";
    
    vector<int> result = intVectorCreator();
    double averageOdd = findAverageOdd(result);
    double averageEven = findAverageEven(result);

    cout << "Average odd: " << averageOdd << '\n';
    cout << "Average even: " << averageEven;

    return 0;
}