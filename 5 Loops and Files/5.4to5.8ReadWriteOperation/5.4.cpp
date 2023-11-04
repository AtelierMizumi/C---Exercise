#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int num, result;
    ifstream inputFile("5.4.input.txt");
    if (inputFile) {
        inputFile >> num;
        cout << "The value read from the file is: " << num << endl;
    } else {
        cout << "Error opening the file." << endl;
        exit;
    }

    for (int i = 1; i <= num; i++)
    {
        result = (result + (i*i));
    }

    cout << "Result: " << result;

    // write the result into 5.4.output.cpp
    ofstream outputFile("5.4.output.txt");
    if (outputFile) {
        outputFile << result;
    } else {
        cout << "Error opening the file." << endl;
        exit;
    }

    return 0;
}
