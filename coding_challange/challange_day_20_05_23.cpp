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

    std::string arg1 = argv[1];
    if (arg1 == "-")
    {
        // if an output file is specified, write to it
        // else read from standard input
        if (argc >= 3)
        {
            std::string filename = argv[2];
            std::ofstream out_file(filename);
            std::string line;
            std::string pre;  // previous line
            bool is_first_line = true;
            while(std::getline(std::cin, line))
            {
                if(is_first_line)
                {
                    out_file << line;
                    is_first_line = false;
                }
                else if(line != pre)
                {
                    out_file << '\n' << line;
                }
                pre = line;
            }
            out_file.close();
        }
        else
        {
            std::string line;
            std::string pre;  // previous line
            bool is_first_line = true;
            while(std::getline(std::cin, line))
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
        }
    }
    else if (arg1 == "-c")
    {
        if (argc >= 3)
        {
            std::string filename = argv[2];
            std::ifstream inFile(filename);

            if (!inFile)
            {
                std::cout << "Error opening file: " << filename << "\n";
                return 1;
            }

            std::string line;
            std::string pre;  // previous line 
            int count = 1;
            bool is_first_line = true;
            while(std::getline(inFile, line))
            {
                if(is_first_line)
                {
                    is_first_line = false;
                }
                else if(line != pre)
                {
                    std::cout << '\n' << count << " " << pre;
                    count = 1;
                }
                else
                {
                    count++;
                }
                pre = line;
            }
            std::cout << '\n' << count << " " << pre;
            inFile.close();
        }
    }

    else if (arg1 == "-d")
    {
        if (argc >= 3)
        {
            std::string filename = argv[2];
            std::ifstream inFile(filename);

            if (!inFile)
            {
                std::cout << "Error opening file: " << filename << "\n";
                return 1;
            }

            std::string line;
            std::string pre;  // previous line
            bool written_before = false;
            bool is_first_line = true;
            while(std::getline(inFile, line))
            {
                if(is_first_line)
                {
                    is_first_line = false;
                }
                else if(line == pre)
                {
                    std::cout << '\n' << line;
                    written_before = true;
                }
                else
                {
                    written_before = false;
                }
                pre = line;
            }
        }
    }

    else
    {
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
    }
    return 0;
}
