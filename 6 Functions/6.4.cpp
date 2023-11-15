#include <iostream>
using namespace std;

int findSumDigits(int, int);

int main(){
    int n, m;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    while (n <= 0 || m <= 0)
    {
        cout << "n and m must be positive. Please enter again: ";
        cin >> n >> m;
    }
    while (n >= m){
        cout << "n must be less than m. Please enter again: ";
        cin >> n >> m;
    }
    cout << "The sum of digits between " << n << " and " << m << " is " << findSumDigits(n, m) << endl;
};

int findSumDigits(int n, int m){
    int biggest = 0;
    int sum = 0;
    int digitSum = 0;
    for (int i = n; i <= m; i++)
    {
        sum = 0;
        for (int j = i; j > 0; j /= 10)
        {
            sum += j % 10;
        }
        if (sum > digitSum)
        {
            digitSum = sum;
            if (i > biggest)
            {
                biggest = i;
            }
        }
    }
    return biggest;
}
