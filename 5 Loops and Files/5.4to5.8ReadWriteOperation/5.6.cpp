#include <iostream>
#include <fstream>

int main() {
    std::ifstream input_file("5.6.input.txt");
    int n;
    input_file >> n;
    input_file.close();

    std::ofstream output_file("5.6.output.txt");
    for (int i = n; i >= 1; i--) {
        output_file << i << '\n';
    }
    output_file.close();

    return 0;
}
