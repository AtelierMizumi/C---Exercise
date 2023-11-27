#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sortStringAsc(int number) {
    string s = to_string(number);
    sort(s.begin(), s.end());
    int result = stoi(s);
    return result;
}
int sortStringDes(int number) {
    string s = to_string(number);
    sort(s.begin(), s.end(), greater<char>());
    return stoi(s);
}

int main (){
    int num, n, i, count;

    cout << "This program will sort the digits in the number in ascending or descending order\n";
    cout << "Input your number: ";
    cin >> n;

    int a = sortStringAsc(n);
    int b = sortStringDes(n);
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}