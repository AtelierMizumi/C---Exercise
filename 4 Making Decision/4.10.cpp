#include <iostream>
#include <string>
using namespace std;

// sort 3 integer ascendingly using if else statement and prints the result
void sort3(int& a, int& b, int& c){
    int temp;
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c){
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }
}


int main(){
    int a, b, c;
    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;
    sort3(a, b, c);
    cout << "The sorted integers are: " << a << " " << b << " " << c << endl;
    return 0;
}