// Find Armstorng numbers in a range from 1 to n

#include <iostream>
using namespace std;

int main(){
    int i, n;
    cout << "This program find Armstrong numbers in a range from 1 to n." << endl;
    cout << "Insert n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        int count = 0;
        long long temp = i;
        while (temp != 0)
        {
            temp /= 10;
            count++;
        }

        int digits[count];

        temp = i;
        for (int j = count - 1; j >= 0; j--)
        {
            digits[j] = temp % 10;
            temp/=10;
        }

        int sum = 0;
        for (int j = 0; j < count; j++)
        {
            sum += digits[j] * digits[j] * digits[j];
        }

        if (sum == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}