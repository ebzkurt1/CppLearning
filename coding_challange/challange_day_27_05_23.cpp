// This challange aims to implement a HTTP server.
// 27.05.23


#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>

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
    
    sockaddr_in serverAddress{};
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(PORT);
    if (bind(local_socket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
        std::cerr << "Failed to bind socket." << std::endl;
        close(local_socket);
        return 1;
    }

    if (listen(local_socket, 5) < 0)
    {
        std::cout << "Error listening to socket" << '\n';
        close(local_socket);
        return -1;
    }

    std::cout << "Listening to port " << PORT << '\n';

    sockaddr_in clientAddress{ };
    socklen_t clientAddressSize = sizeof(clientAddress);
    int clientSocket = accept(local_socket, (struct sockaddr*) &clientAddress, &clientAddressSize);
    if (clientSocket < 0)
    {
        std::cout << "Error accepting client" << '\n';
        close(local_socket);
        return -1;
    }

    std::cout << "Client connected" << '\n';

    close(clientSocket);
    close(local_socket);

    return 0;
}
