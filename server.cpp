#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main() {
    int client, server;
    int portNum = 1500;
    bool isExit = false;
    int bufSize = 1024;
    char[bufSize];

    struct sockaddr_in server_addr;
    socklen_t size;

    client = socket(AF_INET, SOCK_STREAM, 0);

    if (client < 0) {
        cout << "Error establishing connection" << endl;
        exit(1);
    }

    cout << "Server socket connection established ....." << endl;
}