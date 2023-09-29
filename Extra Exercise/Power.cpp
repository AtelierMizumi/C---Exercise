#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x;
    int n;

    cout << "Nhap co so: ";
    cin >> x;
    cout << "Nhap so mu: ";
    cin >> n;

    x = pow(x, static_cast<double>(n)); // cast n to double
    cout << "Ket qua: " << x << endl;                           

    return 0;
}