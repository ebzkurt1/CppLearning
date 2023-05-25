
#include <iostream>
#include <vector>


std::vector<std::vector<int>> generate_square_matrix(int n)
{
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
    int i = 0;
    int j = 0;
    int fill_value = 1;
    int fake_n = n - 1;
    int drop = fake_n;
    bool change_direction = true;
    std::cout << "n: " << n << '\n';
    while(fill_value <= n * n + 1)
    {
        if(change_direction)
        {
            i = fake_n - drop;
            j = fake_n - drop;
            drop = drop - 2;
        }
        if(i <= j && j < fake_n && i < fake_n)
        {
            for(; j <= fake_n; ++j)
            {
                if(fill_value == n * n)
                    return matrix;
                matrix[i][j] = fill_value;
                fill_value++;
            }
            j--;
            i++;  // go to the next row
            for(; i <= j; ++i)
            {
                if(fill_value == n * n)
                    return matrix;
                matrix[i][j] = fill_value;
                fill_value++;
            }
            i--;
            j--;  // go to the previous column
            change_direction = false;
        }
        else if(j < i && j >= 0 && i >= 0)
        {
            for(; j >= 0; --j)
            {
                if(fill_value == n * n)
                    return matrix;
                matrix[i][j] = fill_value;
                fill_value++;
            }
            j++;
            i--;  // go to the previous row
            for(; i > 0; --i)
            {
                if(fill_value == n * n)
                    return matrix;
                matrix[i][j] = fill_value;
                fill_value++;
            }
            fake_n--;
            i++;
            change_direction = true;
        }
    }
    return matrix;
}


void print_matrix(std::vector<std::vector<int>> matrix)
{
    for(int i = 0; i < matrix.size(); ++i)
    {
        for(int j = 0; j < matrix.size(); ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }
}


int main()
{
    std::cout << "Please provide a positive integer:\n";
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> matrix = generate_square_matrix(n);
    print_matrix(matrix);


    return 0;
}
