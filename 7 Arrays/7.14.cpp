#include <iostream>
#include <vector>

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

void displayAllElements(std::vector<int> input){
    std::cout << "All elements: ";
    for (int i = 0; i < input.size(); i++)
    {
        std::cout << input[i] << " ";
    }
    std::cout << '\n';
}

void displayAllPrimeNumbersWithNoDuplicates(std::vector<int> input){
    std::cout << "Prime numbers: ";
    std::vector<int> output;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 2)
        {
            output.push_back(input[i]);
        } else if (input[i] > 2) {
            bool isPrime = true;
            for (int j = 2; j < input[i]; j++)
            {
                if (input[i] % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                output.push_back(input[i]);
            }
        }
    }
    for (int i = 0; i < output.size(); i++)
    {
        std::cout << output[i] << " ";
    }
    std::cout << '\n';
}

int main(){

    std::cout << "This program allows you to enter elements to a vector array"; 
    std::cout << "and find smallest/largest value out of the vector array.";
    std::vector<int> example_vector = intVectorCreator();
    displayAllElements(example_vector);
    displayAllPrimeNumbersWithNoDuplicates(example_vector);
}