#include <iostream>
#include <vector>

int main(){

    int num_row, num_column;
    std::string parser;
    std::vector<char> character_vector;


    std::cin >> num_row >> num_column;
    
    // Create a two dimension vector, notice the way its built
    std::vector<std::vector<char>> TwoDimVector(num_row, std::vector<char>(num_column, '0'));

    // correct parser, parser line holding a whitespace character
    // because of cin so parse them element by element
    for (int i = 0; i < num_row; i++)
    {
        std::cin >> parser;
        for (int k = 0; k < num_column; k++)
        {
            TwoDimVector[i][k] = parser[k];
        };
    };
    
    for (int k = 0; k < num_column; k++)
    {
        int sum = 0;
        for (int i = 0; i < num_row; i++)
        {
            sum+= (TwoDimVector[i][k] == 'O');
        };
        std::cout << sum << " ";
    };
    
    return 0;
}