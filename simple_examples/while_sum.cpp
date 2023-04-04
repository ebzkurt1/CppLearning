// Sum of numbers between 50 to 100 calculated using while loop.


#include <iostream>


int main()
{
    int num = {50};
    int total{};

    while (num<=100)
    {
        total += num;
        ++num;
    }
    std::cout << "Sum of numbers between 50 to 100: " << total << '\n';

    return 0;
}
