#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSymmetricalNum(int n){
    vector<int> digitVector;
    while (n) {
        digitVector.push_back(n%10);
        n = n/10;
    }
    for (int i = 0; i < digitVector.size(); i++){
        if (digitVector[i] != digitVector[digitVector.size()-i-1]){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int i, num;
    cout << "Insert number: ";
    cin >> num;
    if (isSymmetricalNum(num)){
        cout << "The number " << num << " is symmetric.";
    } else {
        cout << "The number " << num << " is not symmetric";
    };
}