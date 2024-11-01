#include "../include/rhombus.h"


template <Scalar T>
Rhombus<T>::Rhombus(Point<T> a, Point<T> b, Point<T> c, Point<T> d) {
    if (!isValidRhombus(a, b, c, d)) {
        throw std::invalid_argument("Введённые точки не образуют ромб");
    }
    p1 = std::make_unique<Point<T>>(a);
    p2 = std::make_unique<Point<T>>(b);
    p3 = std::make_unique<Point<T>>(c);
    p4 = std::make_unique<Point<T>>(d);
}


template <Scalar T>
Rhombus<T>::Rhombus(const Rhombus<T>& other)
    : p1(std::make_unique<Point<T>>(*other.p1)), p2(std::make_unique<Point<T>>(*other.p2)),
      p3(std::make_unique<Point<T>>(*other.p3)), p4(std::make_unique<Point<T>>(*other.p4)) {}

template <Scalar T>
Rhombus<T>& Rhombus<T>::operator=(const Rhombus<T>& other) {
    if (this != &other) {
        p1 = std::make_unique<Point<T>>(*other.p1);
        p2 = std::make_unique<Point<T>>(*other.p2);
        p3 = std::make_unique<Point<T>>(*other.p3);
        p4 = std::make_unique<Point<T>>(*other.p4);
    }
    return *this;
}

template <Scalar T>
T Rhombus<T>::area() const {
    return std::sqrt((p1->x - p3->x) * (p1->x - p3->x) + (p1->y - p3->y) * (p1->y - p3->y)) * std::sqrt((p4->x - p2->x) * (p4->x - p2->x) + (p4->y - p2->y) * (p4->y - p2->y)) / 2; // Примерная формула для площади
}

template <Scalar T>
Point<T> Rhombus<T>::center() const {
    T centerX = (p1->x + p2->x + p3->x + p4->x) / 4;
    T centerY = (p1->y + p2->y + p3->y + p4->y) / 4;
    return Point<T>(centerX, centerY);
}

template <Scalar T>
void Rhombus<T>::print() const {
    std::cout << "Rhombus: ";
    p1->print(); std::cout << ", ";
    p2->print(); std::cout << ", ";
    p3->print(); std::cout << ", ";
    p4->print(); std::cout << " Area: " << area() << std::endl;
}


template class Rhombus<double>;
template class Rhombus<int>;