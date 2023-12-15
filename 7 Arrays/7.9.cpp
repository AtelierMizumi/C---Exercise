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

std::vector<int> deleteDuplicates(std::vector<int> input){
    std::vector<int> output;
    for (int i = 0; i < input.size(); i++)
    {
        if (std::find(output.begin(), output.end(), input[i]) == output.end())
        {
            output.push_back(input[i]);
        }
    }
    return output;
}

std::vector<int> printDuplicates(std::vector<int>& inputVector) {
    std::vector<int> outputVector;
    for (int i = 0; i < inputVector.size(); i++)
    {
        if (std::find(outputVector.begin(), outputVector.end(), inputVector[i]) == outputVector.end())
        {
            outputVector.push_back(inputVector[i]);
        } else {
            std::cout << inputVector[i] << " ";
        }
    }
    return outputVector;  
}

int main(){

    std::cout << "This program will delete duplicate element in the array." << '\n';
    std::vector<int> vector = intVectorCreator();
    std::vector<int> modified_vector = deleteDuplicates(vector);

    for (int i = 0; i < modified_vector.size(); i++)
    {
        std::cout << modified_vector[i] << " ";
    }


    return 0;
}