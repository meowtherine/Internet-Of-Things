#include <iostream>
#include <cstring>
#include <arpa/inet.h>
#include "sim/socket.h" // Include the wrapper class header
#include "sim/in.h" // Include the IP address setting function

int main(int argc, char* argv[]) {
    try {
        if (argc != 2) {
            std::cerr << "Usage: " << argv[0] << " <client_ip>" << std::endl;
            return 1;
        }

        //TODO: use the IP address provided as an argument (Activity 2)

        //TODO: Create a socket object (Activity 2)

        //TODO: Set the IP address of the client (Activity 3)

        //TODO: send a message to the server (Activity 2)

        // TODO: receive a message from the server (Activity 3)

        


    } catch (const std::exception& e) {
        std::cerr << "Client: " << e.what() << std::endl;
    }

    return 0;
}