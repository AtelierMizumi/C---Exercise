#include <iostream>
using namespace std;

unsigned long long findFactorialNumberN(int *numPtr){
    int i;
    unsigned long long result = 1;
    for (i = 1; i <= *numPtr; i++)
    {
        result *= i;
    }
    return result;
}

void signalHandler(int signum) {
    std::cout << "Interrupt signal (" << signum << ") received." << std::endl;

    // Cleanup and close up stuff here
    // Terminate program
    std::exit(signum);
}

int main(){
    signal(SIGINT, signalHandler);
    cout << "This program will find the factorial (n!). Use Ctrl + C to exit." << '\n';
    cout << "Can only calculate factorial up to 64 due to overflow." << '\n';
    

    while (true) {
        int num;
        cout << "Enter factorial you want: ";
        cin >> num;
        while (num<=0)
        {
            cout << "Invalid input, please insert positive integer: ";
            cin >> num;
        }  

        int* numPtr = &num;
        unsigned long long result = findFactorialNumberN(numPtr);
        cout << "Result: " << result << endl;
    }
    
    return 0;
}