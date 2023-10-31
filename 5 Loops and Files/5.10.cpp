#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // reversed integer is stored in reversedNum
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // palindrome if originalNum and reversedNum are equal
    if (originalNum == reversedNum)
        cout << originalNum << " is a palindrome.";
    else
        cout << originalNum << " is not a palindrome.";

    return 0;
}
