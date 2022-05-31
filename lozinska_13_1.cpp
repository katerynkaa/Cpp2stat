#include <iostream>
#include <string>

std::string ffind(std::string line) {
    int start = line.find(":") + 1;
    int endline = line.find(",", start);
    std::string res = line.substr(start, endline - start);
    return res;
}

int main() {
    std::string str = "1: 2 3 4 56, 23";
    std::cout << ffind(str) << std::endl;
}