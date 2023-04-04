// Get two integers from user and print the numbers between those integers.
//

#include <iostream>


int main()
{
    std::cout << "Enter start number for the range\n";
    int start_num{};
    std::cin >> start_num;


    std::cout << "Enter ending number for the range\n";
    int end_num{};
    std::cin >> end_num;

    std::cout << "Printing the range between given numbers:\n";

    if (start_num > end_num) {
        while(start_num >= end_num)
        {
            std::cout << start_num << '\n';
            --start_num;
        } 
    }
    else if (start_num <= end_num) {
        while(start_num <= end_num)
        {
            std::cout << start_num << '\n';
            ++start_num;
        }
    }

    return 0;
}
