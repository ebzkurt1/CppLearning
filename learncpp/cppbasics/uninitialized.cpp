
#include <iostream>

/*
 * This lack of initialization is a performance optimization inherited from C, back when computers were slow. Imagine a
 * case where you were going to read in 100,000 values from a file. In such case, you might create 100,000 variables,
 * then fill them with data from the file.
 */
 
 int main()
 {
     int x;
     
     std::cout << "The value of uninitialized variable: " << x << "\n";

     return 0;
 }

