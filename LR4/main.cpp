#include <iostream>
#include <memory>
#include <vector>
#include "include/array.h"
#include "include/rectangle.h"
#include "include/trapezoid.h"
#include "include/rhombus.h"


void addRectangle(Array<std::shared_ptr<Figure<double>>>& figures) {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    std::cout << "Введите координаты 4-х точек для создания прямоугольника (x1 y1 x2 y2 x3 y3 x4 y4): ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    try {
        figures.add(std::make_shared<Rectangle<double>>(Point<double>(x1, y1), Point<double>(x2, y2), Point<double>(x3, y3), Point<double>(x4, y4)));
        std::cout << "Прямоугольник добавлен.\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Ошибка: " << e.what() << "\n";
    }
}


void addRhombus(Array<std::shared_ptr<Figure<double>>>& figures) {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    std::cout << "Введите координаты 4-х точек для создания ромба (x1 y1 x2 y2 x3 y3 x4 y4): ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    try {
        figures.add(std::make_shared<Rhombus<double>>(Point<double>(x1, y1), Point<double>(x2, y2), Point<double>(x3, y3), Point<double>(x4, y4)));
        std::cout << "Ромб добавлен.\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Ошибка: " << e.what() << "\n";
    }
}


void addTrapezoid(Array<std::shared_ptr<Figure<double>>>& figures) {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    std::cout << "Введите координаты 4-х точек для создания трапеции (x1 y1 x2 y2 x3 y3 x4 y4): ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    try {
        figures.add(std::make_shared<Trapezoid<double>>(Point<double>(x1, y1), Point<double>(x2, y2), Point<double>(x3, y3), Point<double>(x4, y4)));
        std::cout << "Трапеция добавлена.\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Ошибка: " << e.what() << "\n";
    }
}


void printFiguresAndTotalArea(const Array<std::shared_ptr<Figure<double>>>& figures) {
    double totalArea = 0.0;
    std::cout << "\nСписок всех фигур:\n";
    for (size_t i = 0; i < figures.getSize(); ++i) {
        std::cout << i << ". ";
        figures[i]->print();
        totalArea += figures[i]->area();
    }
    std::cout << "Общая площадь всех фигур: " << totalArea << "\n";
}


void removeFigure(Array<std::shared_ptr<Figure<double>>>& figures) {
    size_t index;
    std::cout << "Введите номер фигуры для удаления (нумерация начинается с 1): ";
    std::cin >> index;

    if (index > 0 && index <= figures.getSize()) {
        figures.remove(index - 1);
        std::cout << "Фигура под номером " << index << " успешно удалена.\n";
    } else {
        std::cout << "Ошибка: Неверный номер фигуры.\n";
    }
}


int main() {
    Array<std::shared_ptr<Figure<double>>> figures;

    int choice;
    do {
        std::cout << "\nМеню:\n"
                  << "1. Добавить прямоугольник\n"
                  << "2. Добавить ромб\n"
                  << "3. Добавить трапецию\n"
                  << "4. Показать все фигуры и общую площадь\n"
                  << "5. Удалить фигуру по номеру\n"
                  << "0. Выход\n"
                  << "Ваш выбор: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addRectangle(figures);
                break;
            case 2:
                addRhombus(figures);
                break;
            case 3:
                addTrapezoid(figures);
                break;
            case 4:
                printFiguresAndTotalArea(figures);
                break;
            case 5:
                removeFigure(figures);
                break;
            case 0:
                std::cout << "Выход из программы.\n";
                break;
            default:
                std::cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}