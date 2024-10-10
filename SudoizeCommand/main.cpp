#include <iostream>
#include <cstdlib>
#include <string>
#include "help.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        help();
        return 0;
    }

    std::string command;
    for (int i = 1; i < argc; ++i) {
        command += argv[i];
        if (i < argc - 1) {
            command += " ";
        }
    }

    // Execute the command in the same terminal
    int result = system(command.c_str());

    if (result != 0) {
        std::cerr << "Error: Command execution failed with code " << result << "\n";
    }

    return 0;
}