#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> intVectorCreator(){
    std::vector<int> intVector;
    int n;

    while (true) {
        std::cout << "Enter vector element or enter -1 to stop:";
        std::cin >> n;
        if (n!=-1)
        {
            intVector.push_back(n);
        } else {
            break;
        };
    }

    return intVector;
}

void printDuplicates(std::vector<int>& inputVector) {
    while (!inputVector.empty()) {
        int currentElement = *(inputVector.begin());
        inputVector.erase(inputVector.begin());

        // Find all occurrences of the current element and remove them
        auto newEnd = std::remove(inputVector.begin(), inputVector.end(), currentElement);

        // Print the current element if there were duplicates
        if (newEnd != inputVector.end()) {
            std::cout << "Duplicate Element: " << currentElement << std::endl;
        }

        // Resize the vector to remove the deleted elements
        inputVector.resize(newEnd - inputVector.begin());
    }
}

int main(){

    std::cout << "This program will find the duplicate elements in the array." << '\n';
    std::vector<int> vector = intVectorCreator();
    printDuplicates(vector);

    return 0;
}