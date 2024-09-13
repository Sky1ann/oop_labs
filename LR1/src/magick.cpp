#include <iostream>
#include <stack>
#include <string>
#include "../include/magick.h"

bool magick(const std::string& s) {
    std::stack<char> stack;

    for (char ch: s) { //Проходимся по всей строке, в ch кладем каждый символ из s
        if (ch == '(') {
            stack.push(ch);
        } else if (ch == ')') {
            if (stack.empty()) {
                return false;
            } else stack.pop();
        }
    }

    return stack.empty();
}