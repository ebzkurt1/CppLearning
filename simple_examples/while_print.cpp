// Use -- operator and while loop to print numbers from 10 to 1
//

#include <iostream>

int main()
{
    int num = {10};
    while (num>=0)
    {
        std::cout << num << '\n';
        --num;
    }

    return 0;
}
