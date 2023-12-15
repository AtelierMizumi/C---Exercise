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

void printLargest(std::vector<int> input){
    int largest = input[0];
    for (int i = 1; i < input.size(); i++)
    {
        if (input[i]>largest)
        {
            largest = input[i];
        }
    }
    std::cout << "Largest element: " << largest << '\n';
}

void printSmallest(std::vector<int> input){
    int smallest = input[0];
    for (int i = 1; i < input.size(); i++)
    {
        if (input[i] < smallest){
            smallest = input[i];
        }
    }
    std::cout << "Smallest element: " << smallest << '\n';
}



int main(){
    std::cout << "This program allows you to enter elements to a vector array"; 
    std::cout << "and find smallest/largest value out of the vector array.";
    std::vector<int> example_vector = intVectorCreator();
    printLargest(example_vector);
    printSmallest(example_vector);
}
