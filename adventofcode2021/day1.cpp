// Code that read in a file and print out the content of the file


#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream input("day1_input_emre.txt");
    std::string line;
    while (std::getline(input, line)) {
        std::cout << line << std::endl;
    }
    return 0;
}
