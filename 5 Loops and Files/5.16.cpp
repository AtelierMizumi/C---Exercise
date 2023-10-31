#include <iostream>

int main() {
    int num, digit, odd_digits = 0;

    std::cout << "Enter a number: ";
    std::cin >> num;

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            odd_digits = odd_digits * 10 + digit;
        }
        num /= 10;
    }

    std::cout << "The odd digits in the number are: " << odd_digits << std::endl;

    return 0;
}
