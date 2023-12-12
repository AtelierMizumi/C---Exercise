#include <iostream>

int sum(int x, int y);
float sum(float x, float y);
double sum(double x, double y);

int main(){

    int x, y;
    std::cout << "Enter two integer: ";
    std::cin >> x >> y;
    auto int_result = sum(x, y);
    std::cout << "Result: " << int_result << '\n';

    float m, n;
    std::cout << "Enter two float: ";
    std::cin >> m >> n;
    auto float_result = sum(m, n);
    std::cout << "Result: " << float_result << '\n';
    
    double o, p;
    std::cout << "Enter two double: ";
    std::cin >> o >> p;
    auto double_result = sum(o, p);
    std::cout << "Result: " << double_result << '\n';


    return 0;
}

int sum(int x, int y){
    int sum = x + y;
    return sum;
};
float sum(float x, float y){
    float sum = x + y;
    return sum;
};
double sum(double x, double y){
    double sum = x + y;
    return sum;
};