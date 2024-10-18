#include <iostream>
#include "include/rectange.h"
#include "include/rhombus.h"
#include "include/trapezoid.h"


int main() {
    const int MAX_FIGURES = 100;
    figure* figures[MAX_FIGURES];
    int figure_count = 0;
    int choice;

    while (true) {
        std::cout << "какая фигура? (1 - прямоугольник, 2 - трапеция, 3 - ромб, 0 - выход): ";
        std::cin >> choice;

        if (choice == 0 || figure_count >= MAX_FIGURES) break;

        figure* fig = nullptr;
        if (choice == 1) {
            fig = new rectangle();
        } else if (choice == 2) {
            fig = new trapezoid();
        } else if (choice == 3) {
            fig = new rhombus();
        }

        if (fig) {
            std::cout << "введите 4 координаты по порядку (xi, yi): ";
            std::cin >> fig;
            figures[figure_count++] = fig;
        }
    }

    while (true) {
        std::cout << "Команды: 1 - посмотреть список фигур; 2 - удалить фигуру; 3 - вывести общую площадь" << std::endl;
        std::cin >> choice;

        if (choice == 0) break;

        if (choice == 1) {
            for (int i = 0; i < figure_count; i++) {
                std::cout << i + 1 << " - "<< figures[i] << ", площадь = " << static_cast<double>(*figures[i]) << std::endl;
            }
        } else if (choice == 2) {
            int index;
            std::cout << "Введите номер фигуры, которую надо удалить: ";
            std::cin >> index;
            index -= 1;
            if (index >= 0 && index < figure_count) {
                delete figures[index];
                for (int i = index; i < figure_count - 1; i++) {
                    figures[i] = figures[i + 1];
                }
                figure_count--;
                std::cout << "фигура под номером  " << index << " удалена" << std::endl;
                }
        } else if (choice == 3) {
            double area = 0;
            for (int i = 0; i < figure_count; i++) {
                area += static_cast<double>(*figures[i]);
            }
            std::cout << "Общая площадь фигур = " << area << std::endl;
        }
    }

    return 0;
}