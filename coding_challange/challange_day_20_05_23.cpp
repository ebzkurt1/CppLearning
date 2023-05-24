// The main idea of this challange is to build uniq cli tool.
// 20.05.23

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>


std::map<std::string, int> process_input_file(std::string filename)
    // read input file line by line and save it to an ordered map
{
    std::map<std::string, int> input_lines;
    std::ifstream inFile(filename);
    std::string line;
    if (!inFile)
    {
        std::cout << "Error opening file: " << filename << "\n";
        return input_lines;
    }
    while(std::getline(inFile, line))
    {
        ++input_lines[line];
    }
    inFile.close();
    return input_lines;
}


void read_from_standard_input(int argc, char* argv[])
    // read from standard input and print it to standard output
{
    std::string line;
    std::string pre;
    bool first_line = true;
    if(argc == 2)
    {
        while(std::getline(std::cin, line))
        {
            if(first_line)
            {
                std::cout << line;
                first_line = false;
            }
            else if(line != pre)
            {
                std::cout << '\n' << line;
            }
            pre = line;
        }
    }
    else if(argc == 3)
    {
        std::ofstream outFile(argv[2]);
        while(std::getline(std::cin, line))
        {
            if(first_line)
            {
                outFile << line;
                first_line = false;
            }
            else if(line != pre)
            {
                outFile << '\n' << line;
            }
            pre = line;
        }
    }
}


void out_only_unique(std::map<std::string, int> input_lines, bool print_count = false)
{
    for(const auto& pair : input_lines)
    {
        if(pair.second == 1)
        {
            if(print_count)
            {
                std::cout << pair.second << " " << pair.first << '\n';
            }
            else 
            {
                std::cout << pair.first << '\n';
            }
        }
    }
}


void out_only_repeat(std::map<std::string, int> input_lines, bool print_count = false)
{
    for(const auto& pair : input_lines)
    {
        if(pair.second > 1)
        {
            if(print_count)
            {
                std::cout << pair.second << " " << pair.first << '\n';
            }
            else 
            {
                std::cout << pair.first << '\n';
            }
        }
    }
}


int main(int argc, char* argv[])
    // argc - number of arguments represents number of command line arguments passed to the program
    // char* argv[] - This parameter is an array of strings (char*) representing the command-line arguments.
    // argv stands for "argument vector." 
{
    std::vector<std::string> user_inputs;
    for(int i = 1; i < argc; i++)
    {
        std::string user_input = argv[i];
        user_inputs.push_back(user_input);
    }
    if(argc < 2)
    {
        std::cout << "Error: no arguments passed\n";
        return 1;
    }
    else if(user_inputs[0] == "-")
    {
        read_from_standard_input(argc, argv);
    }
    else
    {
        std::string filename = argv[argc - 1];
        std::map<std::string, int> input_lines = process_input_file(filename);
        if(argc > 3)
        {
            if(user_inputs[0] == "-d" || user_inputs[0] == "--repeated" || user_inputs[1] == "-d" || user_inputs[1] == "--repeated" )
            {
                out_only_repeat(input_lines, user_inputs[0] == "-c" || user_inputs[1] == "-c");
            }
            else if(user_inputs[0] == "-u" || user_inputs[1] == "-u")
            {
                out_only_unique(input_lines, user_inputs[0] == "-c" || user_inputs[1] == "-c");
            }
        }
        else if(argc <=3)
        {
            if(user_inputs[0] == "-d" || user_inputs[0] == "--repeated")
            {
                out_only_repeat(input_lines);
            }
            else if(user_inputs[0] == "-u")
            {
                out_only_unique(input_lines);
            }
            else if(user_inputs[0] == "-c")
            {
                for(const auto& pair : input_lines)
                {
                    std::cout << pair.second << " " << pair.first << '\n';
                }
            }
        }
    }
    return 0;
}
