#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    int largest_odd_divisor = 1;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 1) {
            largest_odd_divisor = i;
        }
    }

    std::cout << "The largest odd divisor of " << n << " is " << largest_odd_divisor << std::endl;

    return 0;
}
