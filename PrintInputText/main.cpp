#include <iostream>
#include <string>

int main() {
    std::string i;
    std::cout << "Type some text to return: ";
    std::getline(std::cin, i);
    std::cout << "You typed: " << i << std::endl;
    return 0;
}