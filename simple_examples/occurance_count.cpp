// Count the repetition of numbers given.


#include <iostream>


int main ()
{
    int current_val{};
    int new_val{};
    if (std::cin >> current_val) {
        int cnt = {1};
        while (std::cin >> new_val)
        {
            if (new_val == current_val) {
                ++cnt;
            }
            else {
                std::cout << current_val << " occurs " << cnt << " times in the series\n";
                current_val = new_val;
                cnt = 1;
            }
        }
        std::cout << current_val << " occurs " << cnt << " times in the series\n";
    }
    return 0;
}
