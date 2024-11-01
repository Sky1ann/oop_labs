#include "../include/trapezoid.h"

template <Scalar T>
Trapezoid<T>::Trapezoid(Point<T> a, Point<T> b, Point<T> c, Point<T> d) {
    if (!isValidTrapezoid(a, b, c, d)) {
        throw std::invalid_argument("Введённые точки не образуют трапецию");
    }
    p1 = std::make_unique<Point<T>>(a);
    p2 = std::make_unique<Point<T>>(b);
    p3 = std::make_unique<Point<T>>(c);
    p4 = std::make_unique<Point<T>>(d);
}

template <Scalar T>
Trapezoid<T>::Trapezoid(const Trapezoid<T>& other)
    : p1(std::make_unique<Point<T>>(*other.p1)), p2(std::make_unique<Point<T>>(*other.p2)),
      p3(std::make_unique<Point<T>>(*other.p3)), p4(std::make_unique<Point<T>>(*other.p4)) {}

template <Scalar T>
Trapezoid<T>& Trapezoid<T>::operator=(const Trapezoid<T>& other) {
    if (this != &other) {
        p1 = std::make_unique<Point<T>>(*other.p1);
        p2 = std::make_unique<Point<T>>(*other.p2);
        p3 = std::make_unique<Point<T>>(*other.p3);
        p4 = std::make_unique<Point<T>>(*other.p4);
    }
    return *this;
}

template <Scalar T>
T Trapezoid<T>::area() const {
    T base1 = std::sqrt((p2->x - p1->x) * (p2->x - p1->x) + (p2->y - p1->y) * (p2->y - p1->y));
    T base2 = std::sqrt((p4->x - p3->x) * (p4->x - p3->x) + (p4->y - p3->y) * (p4->y - p3->y));
    T side = std::sqrt((p3->x - p2->x) * (p3->x - p2->x) + (p3->y - p2->y) * (p3->y - p2->y));
    T height = std::sqrt(side * side - std::pow((base2 - base1) / 2, 2));
    return (base1 + base2) * height / 2;
}

template <Scalar T>
Point<T> Trapezoid<T>::center() const {
    T centerX = (p1->x + p2->x + p3->x + p4->x) / 4;
    T centerY = (p1->y + p2->y + p3->y + p4->y) / 4;
    return Point<T>(centerX, centerY);
}

template <Scalar T>
void Trapezoid<T>::print() const {
    std::cout << "Trapezoid: ";
    p1->print(); std::cout << ", ";
    p2->print(); std::cout << ", ";
    p3->print(); std::cout << ", ";
    p4->print(); std::cout << " Area: " << area() << std::endl;
}


template class Trapezoid<double>;
template class Trapezoid<int>;