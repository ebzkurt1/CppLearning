#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>


int power_consuption_calculation(std::string file_name){
    std::ifstream input(file_name);
    std::string line;
    int digits_sum[12] = {};
    int gamma[12] = {};
    int epsilon[12] = {};

    int input_legth = 0;
    
    while(std::getline(input, line)){
        for (int i = 0; i < line.length(); i++){
            if (line[i] == '0'){
                digits_sum[i] += 0;
            }
            else if (line[i] == '1'){
                digits_sum[i] += 1;
            }
        }
        input_legth++;
    }
    for (int i = 0; i < sizeof(digits_sum) / sizeof(int); i++){
        if (digits_sum[i] / (double)input_legth >=0.5){
            gamma[i] = 1;
            epsilon[i] = 0;
        }
        else{
            gamma[i] = 0;
            epsilon[i] = 1;
        }
    }
    int gamma_decimal = 0;
    int epsilon_decimal = 0;
    for (int i = 0; i < sizeof(gamma)/sizeof(int); i++){
        gamma_decimal += gamma[i] * pow(2, sizeof(gamma)/sizeof(int) - i - 1);
        epsilon_decimal += epsilon[i] * pow(2, sizeof(epsilon)/sizeof(int) - i - 1);
    }
    return gamma_decimal * epsilon_decimal;
}


int main ()
{
    std::cout << power_consuption_calculation("day3_input_emre.txt") << std::endl;
    return 0;
}
