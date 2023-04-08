#include <iostream>
#include <fstream>
#include <string>
#include <vector>


int vector_sum(std::vector<int> vector) {
    int sum = 0;
    for (int i = 0; i < vector.size(); i++) {
        sum += vector[i];
    }
    return sum;
}


int incremet_between_windows(int window_size, std::string file_name) {
    std::ifstream input(file_name);
    std::string line;

    int previous_sum = 0;
    int number_of_larger = 0;
    std::vector<int> window_list;

    while (std::getline(input, line)) {
        if (window_list.size() != window_size) {
            window_list.push_back(std::stoi(line));
        }
        else if (window_list.size() == window_size) {
            int line_int = std::stoi(line);
            int window_sum = vector_sum(window_list);
            if (window_sum > previous_sum) {
                number_of_larger++;
            }
            window_list.erase(window_list.begin());
            window_list.push_back(line_int);
            previous_sum = window_sum;
        }
    }
    return number_of_larger;
}

int main() {
    std::cout << incremet_between_windows(3, "day1_input_emre.txt") << std::endl;
    return 0;
}
