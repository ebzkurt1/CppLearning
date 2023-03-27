
#include <iostream>

void printHi()
{
    std::cout << "Hi, this is a basic learning script!\n";
}


void printValues(int x, int y)
{
    std::cout << "Value of the first integer: " << x << '\n';
    std::cout << "Value of the second integer: " << y << '\n';
}


int doubleOf(int x)
{
    return x * 2;
}


int getValueFromUser()
{
    std::cout << "Enter an integer: " << '\n';
    int inp{};
    std::cin >> inp;
    return inp;
}


int main()
{
    printHi();
    int num{ getValueFromUser() };
    std::cout << num << " double is: " << doubleOf(num) << '\n';
    return 0;
}
