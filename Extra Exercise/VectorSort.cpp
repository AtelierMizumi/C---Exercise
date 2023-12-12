#include <iostream>
#include <vector>

/**
 * Sorts the elements of a vector of integers in ascending order.
 *
 * @param input The vector of integers to be sorted.
 * @return The sorted vector of integers.
 */
std::vector<int> intVectorSortAscending(std::vector<int> input){
    int temp;
    for (int i = 0; i < input.size(); i++)
    {
        for (int j = i+1; j < input.size(); j++)
        {
            if (input[i]>input[j])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    return input;
}

std::vector<int> intVectorCreator(){
    std::vector<int> intVector;
    int n;

    while (true) {
        std::cout << "Enter vector element or enter -1 to stop: ";
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

int main(){

    std::cout << "This program will sort the array vector. \n";
    std::vector<int> vector = intVectorCreator();
    vector = intVectorSortAscending(vector);

    for (int x:vector){
        std::cout << x << " ";
    };

    return 0;
}