#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile;
    inputFile.open("5.7.input.txt");

    int n;
    inputFile >> n;

    inputFile.close();

    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    ofstream outputFile;
    outputFile.open("5.7.output.txt");

    outputFile << sum;

    outputFile.close();

    return 0;
}
