#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int a = 0, b = 1, c;
    std::cout << "Fibonacci sequence from 0 to " << n << ": ";
    std::cout << a << " " << b << " ";

    for (int i = 2; i <= n; i++) {
        c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}
