#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("5.8.input.txt");
    std::ofstream outputFile("5.8.output.txt");

    if (!inputFile) {
        std::cerr << "Failed to open input file\n";
        return 1;
    }

    if (!outputFile) {
        std::cerr << "Failed to open output file\n";
        return 1;
    }

    int number;
    inputFile >> number;

    std::string numberString = std::to_string(number);

    for (char digit : numberString) {
        outputFile << digit << " ";
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
