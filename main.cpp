#include <fstream>
#include <iostream>

int main() {
    std::string path;

    std::cout << "Enter file path:" << std::endl;
    std::cin >> path;
    std::ifstream test;
    test.open(path, std::ios::binary);

    if (!test.is_open()) {
        std::cout << "Error! File isn't open" << std::endl;
    } else {
        std::cout << "File is open" << std::endl;
    }

    std::string buffer;
    while (!test.eof()) {
        getline(test, buffer);
        std::cout << buffer << std::endl;
    }

    test.close();

    return 0;
}
