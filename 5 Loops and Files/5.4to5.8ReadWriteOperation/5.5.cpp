#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("5.5.output.txt");
    // clear all the content in the file
    outputFile.clear();

    for (int i = 48; i <= 127; i++) {
        std::cout << static_cast<char>(i) << " ";
        outputFile << static_cast<char>(i) << " ";
    }

    outputFile.close();
    return 0;
}
