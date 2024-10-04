#include <iostream>
#include "include/octal.h"


int main() {
    octal var1 = octal();
    octal var2 = octal(3, '7');
    octal var3 = octal{'1', '2', '3'};
    octal var4 = octal("107");

    var1.print(std::cout) << std::endl;
    var2.print(std::cout) << std::endl;
    var3.print(std::cout) << std::endl;
    var4.print(std::cout) << std::endl;

    var2 += octal("1");
    std::cout << "Прибавили к var2 1" << std::endl;
    var2.print(std::cout) << std::endl;
    var2 -= octal("777");
    std::cout << "Вычли 777" << std::endl;
    var2.print(std::cout) << std::endl;

    return 0;
}