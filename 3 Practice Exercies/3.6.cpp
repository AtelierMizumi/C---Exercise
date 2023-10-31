#include <iostream>
using namespace std;

int main(){
    double x,y,result;
    cout << "Nhap x va y: ";
    cin >> x >> y;

    cout << "Gia tri X | Gia tri Y | Bieu thuc | Ket Qua \n";
    cout << x << " | " << y << " | A=y+3 | " << "A = " << y+3 << endl;
    cout << x << " | " << y << " | B=y-2 | " << "B = " << y-2 << endl;
    cout << x << " | " << y << " | A=y*5 | " << "A = " << y*5 << endl;
    cout << x << " | " << y << " | A=x/y | " << "A = " << x/y << endl;
    // convert to integer for other calculation
    int a = x;
    int b = y;
    cout << a << " | " << b << " | A=x%y | " << "A = " << a%b;
    return 0;
}
