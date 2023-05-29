#include <iostream>
#include "IntCell.h"

int main()
{
    IntCell m;

    m.write( 5 );
    std::cout << "Cell contents: " << m.read( ) << '\n';

    return 0;
}
