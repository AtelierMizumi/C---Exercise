#include <iostream>
using namespace std;

int main() {

    double sum, diemtb;
    double diemCuoiKi, diemGiuaKi;
    double mieng1, mieng2, mieng3;

    cout << "=== Diem kiem tra ===" << endl;
    cout << "Nhap diem kiem tra mieng 1:";
    cin >> mieng1;
    cout << "Nhap diem kiem tra mieng 2:";
    cin >> mieng2;
    cout << "Nhap diem kiem tra mieng 3:";
    cin >> mieng3;

    cout << "=== Diem thi giua ki ===" << endl;
    cout << "Nhap diem thi giua ki: ";
    cin >> diemGiuaKi;
    cout << "=== Diem thi cuoi ki ===";
    cin >> diemCuoiKi;

    sum = mieng1+mieng2+mieng3+diemCuoiKi+diemGiuaKi;
    diemtb = (mieng1+mieng2+mieng3+diemGiuaKi*2+diemCuoiKi*3)/8;
    
    cout << "=== Tong ket ===" << endl;
    cout << "Tong diem kiem tra: " << sum << endl;
    cout << "Diem thi giua ki: " << diemGiuaKi << endl;
    cout << "Diem thi cuoi ki: " << diemCuoiKi << endl;
    cout << "Diem trung binh: " << diemtb << endl;

    return 0;
}