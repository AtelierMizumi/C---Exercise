#include <iostream>
using namespace std;

int main(){
    
    int x, y, UCLN;
    cout << "Nhap x, y: ";
    cin >> x >> y;
    if (x < y){
        for (int i = y; i > 0; i--)
        {
            if (x%i == 0 && y%i == 0){
                UCLN = i;
                break;
            }
        }
    } else {
        for (int i = x; i > 0; i--)
        {
            if (x%i == 0 && y%i == 0){
                UCLN = i;
                break;
            }
        }
    }
    
    cout << "Uoc chung lon nhat la: " << UCLN;
    
    return 0;

}