#include <iostream>


int main()
{
    string str = "hell";
    string & rstr = str; // rstr is another name for str
    rstr += ’o’; // changes str to "hello"
    bool cond = (&str == &rstr); // true; str and rstr are same object
    // string & bad1 = "hello"; // illegal: "hello" is not a modifiable lvalue
    // string & bad2 = str + ""; // illegal: str+"" is not an lvalue
    // string & sub = str.substr( 0, 4 ); // illegal: str.substr( 0, 4 ) is not an lvalue


    string str = "hell";
    string && bad1 = "hello"; // Legal
    string && bad2 = str + ""; // Legal
    string && sub = str.substr( 0, 4 ); // Legal
    
    for( auto & x : arr ){
        ++x;
    }

    return 0;
}
