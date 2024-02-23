#include <iostream>
using namespace std;

int main(){

    int m, n, i, k;
    cout << "Insert m (length) and n (height): ";
    cin >> m >> n;

    for (i = 0; i<m; i++){
        cout << "*";
    };
    cout << '\n';

    for (i = 1; i < n-1; i++){
        cout << '*';
        for (k = 1; k < m-1; k++){
            cout << ' ';
        };
        cout << '*';
        cout << '\n';
    };

    if (n!=1){
        for (i = 0; i<m; i++){
            cout << "*";
        };
        cout << '\n';
    }
    

    return 0;
}