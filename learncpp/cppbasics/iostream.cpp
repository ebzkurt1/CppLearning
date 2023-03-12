
#include <iostream>
// The io part of the standard library stands for input/output
//

int main()
{

    // cout allows us to send data to the console to be printed as text
    // cout stands for "character output
    std::cout << "Hi!" << std::endl;

    // cout can also print numbers
    std::cout << 4 << std::endl;

    // it can also be used to print values of the variables.
    int x {5};
    std::cout << x << std::endl;

    // the insertion operation can be used multiple times
    std::cout << "Who " << "are " << "you?" << std::endl;
    std::cout << "x is equal to: " << x << std::endl;
    // it is the best practice to output a new line whenever a line of output is complete

    // Using std::endl is not efficient, as it actually does two jobs; It moves the cursor to the next line and it
    // flushes the buffer. When we are writing a text, it is not necessary to flush the buffer every time. It is more
    // efficient to let the system flush itself. Because of this '\n' character is preferred instead of endl

    std::cout << "x is equal to: " << x << "\n";  // using '\n' is more stable
    std::cout << "End of the tutorial!\n";

    std::cout << "Enter an integer\n";
    int i {};
    std::cin >> i;
    std::cout << "You have entered:" << i << '\n';

    std::cout << "Now enter two numbers seperated by a space\n";
    int first {};
    int second {};
    std::cin >> first >> second;
    std::cout << "You have enterred " << first << " and " << second << '\n';


    return 0;
}
