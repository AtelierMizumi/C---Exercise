#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    int sum = 0;
    int k = 0;
    while (sum < n) {
        k++;
        sum += k;
    }

    std::cout << "The largest K in " << n << " is " << k << std::endl;

    return 0;
}
