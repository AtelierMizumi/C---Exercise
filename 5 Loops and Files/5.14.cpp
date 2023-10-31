#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    int sum = 0;
    int temp = num;
    int digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == num;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. Armstrong" << endl;
        cout << "2. Prime" << endl;
        cout << "3. Finish" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                if (isArmstrong(num)) {
                    cout << num << " is an Armstrong number." << endl;
                } else {
                    cout << num << " is not an Armstrong number." << endl;
                }
                break;
            }
            case 2: {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                if (isPrime(num)) {
                    cout << num << " is a prime number." << endl;
                } else {
                    cout << num << " is not a prime number." << endl;
                }
                break;
            }
            case 3:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 3);
    return 0;
}
