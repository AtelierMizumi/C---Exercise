#include <bits/stdc++.h> 
using namespace std;

int Fact(int n);
int Fib(int n);
int FibFor(int n);
void printFibFrom1toN(int n);
int FactFor(int n);
void move(int n, char from_rod, char to_rod, char aux_rod);

int ThapHaNoi();

int main(){
    int n;
    cout << "Insert n: ";
    cin >> n;
    cout << "Fibonacci using recursion: " << Fib(n) << '\n';
    cout << "Fibonacci using for loop:  " << FibFor(n) << '\n';
    cout << "Factorial using recursion: " << Fact(n) << '\n';
    printFibFrom1toN(n);
    cout << "Factorial using for loop:  " << FactFor(n) << '\n';
    cout << "Ha Noi tower with " << n << " disk(s)" << '\n';
    move(n, 'A', 'C', 'B');
    return 0;
}

int Fact(int n){
    if (n<1) 
        return -1;
    else if (n==1)
        return 1;
    else 
        return n * Fact(n -1);
}
int Fib(int n){
    if (n==1 || n==2)
        return 1;
    else if (n<=0)
        return -1;
    else
        return Fib(n-1) + Fib(n-2);
}

int FibFor(int n){
    if (n == 1 || n == 2)
        return 1;
    else if (n <= 0)
        return -1;
    int F1 = 1, F2 = 1, Fi;
    for (int i = 3; i <= n; i++) {
        Fi = F1 + F2;
        F2 = F1;
        F1 = Fi;
    }
    return Fi;
}

void printFibFrom1toN(int n){
    for (int i = 1; i <= n; i++) {
        cout << "Fib[" << i << "]: " << Fib(i) << '\n';
    }
}

int FactFor(int n){
    if (n < 0) {
        return -1;
    } else if (n == 1)
        return 1;
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = result * i;
    }
    return result;
}

void move(int n, char from_rod, char to_rod, char aux_rod){
    // Bai toan thap Ha Noi
    // 3 Cot 
    // Di chuyen 1 dia 1 thoi diem
    // Dia tren luon nho hon dia duoi
    if (n == 0) {
        return;
    }
    move(n-1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl; 
    move(n-1, aux_rod, to_rod, from_rod);
}