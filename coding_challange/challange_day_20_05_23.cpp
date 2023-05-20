// The main idea of this challange is to build uniq cli tool.
// 20.05.23

#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char* argv[])
    // argc - number of arguments represents number of command line arguments passed to the program
    // char* argv[] - This parameter is an array of strings (char*) representing the command-line arguments.
    // argv stands for "argument vector." 
{
    // read input file line by line

    for (int i = 1; i < argc; i++)
    {
        std::string filename = argv[i];
        std::ifstream inFile(filename);

        if (!inFile)
        {
            std::cout << "Error opening file: " << filename << "\n";
            return 1;
        }

        std::string line;
        std::string pre;  // previous line 
        bool is_first_line = true;
        while(std::getline(inFile, line))
        {
            if(is_first_line)
            {
                std::cout << line;
                is_first_line = false;
            }
            else if(line != pre)
            {
                std::cout << '\n' << line;
            }
            pre = line;
        }
        inFile.close();

    }
    return 0;
}
