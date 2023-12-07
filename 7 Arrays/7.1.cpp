#include <iostream>

using namespace std;

int main(){

    int array[6];
    
    for (int i = 0; i < 6; i++){
        cout << "Enter hours worked by employee number " << i+1 << " :";
        cin >> array[i];
    }

    for (int i = 0; i < 6; i++){
        cout << array[i] << endl;
    }

    return 0;
}