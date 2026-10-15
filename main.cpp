#include <iostream>
#include <string>
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Студент: " << name << std::endl;
    std::cout << "Дата: 2026-13-10" << std::endl;
    return 0;
}