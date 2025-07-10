#include <iostream>
#include <cstring>
#include <arpa/inet.h>
#include "sim/socket.h" // Include the wrapper class header
#include <csignal>
#include "sim/in.h"
#include "MessageHandler.h" // Include the MessageHandler header


sim::socket* serverSocket = nullptr; // Global pointer to the server socket

// Signal handler function
void signalHandler(int signal) {
    if (signal == SIGINT) {
        std::cout << "\nGracefully shutting down..." << std::endl;
        
        if (serverSocket) {
            delete serverSocket;
            serverSocket = nullptr;
        }
        
        std::exit(0); // Exit the program
    }
}



int main() {
    try {

        // Register the signal handler for SIGINT
        std::signal(SIGINT, signalHandler);


       //TODO Create a server socket and bind it to the address

        std::cout << "Server running and waiting for messages..." << std::endl;

        
        char buffer[256];
        struct sockaddr_in clientAddr;

        //TODO Receive data from the client and handle the message

        
        
    } catch (const std::exception& e) {
        std::cerr << "Server: " << e.what() << std::endl;
    }

    return 0;
}