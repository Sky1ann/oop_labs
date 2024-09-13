#include <iostream>
#include <stack>
#include <string>
#include "include/magick.h"


int main(void) {
    std::string s;

    std::getline(std::cin, s);

    std::cout << magick(s) << std::endl;

    return 0;
}