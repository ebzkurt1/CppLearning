
#include <iostream>

int add(int x, int y);


int main()
{
    std::cout << "Enter two numbers\n";
    int num1{};
    std::cout << "Please enter the first number: " << '\n';
    std::cin >>num1;
    int num2{};
    std::cout << "Please enter the second number: " << '\n';
    std::cin >>num2;

    std::cout << "Result of their addition is : " << add(num1, num2) << '\n';

    return 0;
}
