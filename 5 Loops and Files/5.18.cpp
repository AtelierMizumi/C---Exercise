#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile;
    ofstream outputFile;
    string inputFileName, outputFileName;
    int num;

    // Get the input file name from the user
    cout << "Enter the input file name: ";
    cin >> inputFileName;

    // Open the input file
    inputFile.open(inputFileName);

    // Check if the input file was successfully opened
    if (!inputFile)
    {
        cout << "Error opening the input file.\n";
        return 0;
    }

    // Get the output file name from the user
    cout << "Enter the output file name: ";
    cin >> outputFileName;

    // Open the output file
    outputFile.open(outputFileName);

    // Check if the output file was successfully opened
    if (!outputFile)
    {
        cout << "Error opening the output file.\n";
        return 0;
    }

    // Read the numbers from the input file and write the squares to the output file
    while (inputFile >> num)
    {
        outputFile << num * num << endl;
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    cout << "The squares of the numbers in " << inputFileName << " have been saved to " << outputFileName << endl;

    return 0;
}
