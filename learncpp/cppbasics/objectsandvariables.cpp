
#include <iostream>

int main()
{
    int x;  // define a variable named x, of type int.
    double width;  // another data type
    // int a, b;  // same as declaring them one by one.
    // int a, double b;  // wrong (compiler error)
    // int a; double b;  // correct but not recommended
    // Correct and recommended (easier to read)
    int a;
    double b;

    // After a variable has been defined, we can assign values to it.
    width = 5;  // = is called as assignment operator.

    // Definition and assignment operations can be combined together.
    int q;      // no initilizer (default initialization)
    int w = 5;  // initializer after equals sign (copy initialization)
    int c( 6 ); // initializer in paranthesis (direct initialization)

    // List initialization methods
    int d{ 7 };    // initializer in braces (direct initialization)
    int e = { 8 }; // initializer in braces after equals sign (copy list initialization)
    int f {};      // initializer is empty braces (value initialization)
    return 0;
}
