#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "Enter two number: ";
    cin >> num1 >> num2;
    if (num2 == 0)
    {
        cout << "Cannot divined by 0";
    }
    else
    {
        cout << "Result: " << num1 / num2;
    };

    return 0;
}