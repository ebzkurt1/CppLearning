#include <vector>
#include <iostream>
#include <string>


/**
 * Return the maximum item in the array a
 * Assumes a.size() > 0
 * Comparable objects must provide operator< and operator=
 */
template <typename Comparable>
const Comparable & findMax( const std::vector<Comparable> & a )
{
    int maxIndex = 0;

    for( int i = 1; i < a.size(); ++i )
        if( a[ maxIndex ] < a[ i ] )
            maxIndex = i;
    return a[ maxIndex ];
}

int main()
{
    std::vector<int>    v1( 37 );
    std::vector<double> v2( 40 );
    std::vector<std::string> v3( 80 );


    std::cout << findMax( v1 ) << '\n';
    std::cout << findMax( v2 ) <<  '\n';
    std::cout << findMax( v3 ) <<  '\n';

    return 0;
}
