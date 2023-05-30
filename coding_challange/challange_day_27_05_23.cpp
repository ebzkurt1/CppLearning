// This challange aims to implement a HTTP server.
// 27.05.23


#include <iostream>

#define PORT 80


int main(int argc, char* argv[])
{
    // program a simple socket server that listens to port 80 on localhost
    // and returns a simple HTTP response

    int local_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (local_socket < 0)
    {
        std::cout << "Error creating socket" << '\n';
        return -1;
    }




    return 0;
}
