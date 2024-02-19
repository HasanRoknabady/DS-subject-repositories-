#include <iostream>
#include <fstream>
#include <string>

// write your own code here

void killYourProgram() {
    std::ifstream file(__FILE__);
    if (file.is_open()) {
        std::string code((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        std::cout << code;
    }
}

int main() {
    killYourProgram();
    return 0;
}
