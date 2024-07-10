#include <fstream>
#include <iostream>

int main() {
    std::string path;

    std::cout << "Enter file path:" << std::endl;
    std::cin >> path;
    std::ifstream file;
    file.open(path, std::ios::binary);

    if (!file.is_open()) {
        std::cout << "Error! File isn't open" << std::endl;
        return 0;
    } else {
        std::cout << "File is open" << std::endl;
    }

    char buffer[20];
    while (!file.eof()) {
        file.read(buffer, sizeof(buffer));
        for (int i = 0; i < file.gcount(); ++i) {
            std::cout << buffer[i];
        }
    }

    file.close();

    return 0;
}
