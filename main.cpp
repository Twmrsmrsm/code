#include <iostream>

int main() {
    char a=124+1;
    std::cout << char(a+3.) << std::endl;
    std::cout << char(a-3.) << std::endl;
    std::cout << char(a/3.) << std::endl;
    std::cout << char(a*3.) << std::endl;
    return 0;
}