#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int quality(int n) {
    vector<int> factors = primeFactors(n);
    int product = 1;
    for (int factor : factors) {
        product *= factor;
    }
    int sum = digitSum(product);
    int digits = log10(n) + 1;
    if (sum == digits) {
        return 1;
    } else if (sum < digits) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int q = quality(n);
    if (q == 1) {
        cout << n << " is equidigital." << endl;
    } else if (q == 2) {
        cout << n << " is frugal." << endl;
    } else {
        cout << n << " is wasteful." << endl;
    }
    return 0;
}
