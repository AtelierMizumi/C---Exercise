#include <vector>
#include <iostream>

std::vector<int> multiplyArrays(const std::vector<int>& array1, const std::vector<int>& array2) {
    std::vector<int> result;
    
    if (array1.size() != array2.size()) {
        // Handle error: arrays must have the same number of elements
        return result;
    }
    
    for (size_t i = 0; i < array1.size(); i++) {
        result.push_back(array1[i] * array2[i]);
    }
    
    return result;
}

int main(){
    std::vector<int> array1 = {1, 2, 3};
    std::vector<int> array2 = {4, 5, 6};
    std::vector<int> result = multiplyArrays(array1, array2);
    
    for (size_t i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    
    return 0;
}