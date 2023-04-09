#include <iostream>
#include <fstream>
#include <string>
#include <vector>


int position_calculator(std::string file_name){
    std::ifstream input(file_name);
    std::string line;
    std::string forward = "forward";
    std::string depth_down = "down";
    std::string depth_up = "up";
    int aim = 0;
    int depth = 0;
    int horizontal_position = 0;

    while(std::getline(input, line)){
        if(line.find(forward) != std::string::npos){
            int forward_length = std::stoi(line.substr(8, 1));
            depth += aim * forward_length;
            horizontal_position += forward_length;
        }
        else if(line.find(depth_down) != std::string::npos){
            int depth_length = std::stoi(line.substr(5, 1));
            aim += depth_length;
        }
        else if(line.find(depth_up) != std::string::npos){
            int depth_length = std::stoi(line.substr(3, 1));
            aim -= depth_length;
        }
    }
    return horizontal_position * depth;
}


int main(){
    std::cout << position_calculator("day2_input_emre.txt") << std::endl;
    return 0;
}
