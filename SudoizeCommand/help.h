#ifndef HELP_H
#define HELP_H

void help() {
    std::cout << "Usage: sudoize [command] [args...]" << std::endl;
    std::cout << "Commands:" << std::endl;
    std::cout << "  help: Display this help message" << std::endl;
    std::cout << "  run: Run the specified command as root using sudo" << std::endl;
}

#endif