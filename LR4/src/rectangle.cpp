#include "../include/rectangle.h"

template <Scalar T>
Rectangle<T>::Rectangle(Point<T> a, Point<T> b, Point<T> c, Point<T> d) {
    if (!isValidRectangle(a, b, c, d)) {
        throw std::invalid_argument("Введённые точки не образуют прямоугольник");
    }
    p1 = std::make_unique<Point<T>>(a);
    p2 = std::make_unique<Point<T>>(b);
    p3 = std::make_unique<Point<T>>(c);
    p4 = std::make_unique<Point<T>>(d);
}
    

template <Scalar T>
Rectangle<T>::Rectangle(const Rectangle<T>& other)
    : p1(std::make_unique<Point<T>>(*other.p1)), p2(std::make_unique<Point<T>>(*other.p2)),
      p3(std::make_unique<Point<T>>(*other.p3)), p4(std::make_unique<Point<T>>(*other.p4)) {}

template <Scalar T>
Rectangle<T>& Rectangle<T>::operator=(const Rectangle<T>& other) {
    if (this != &other) {
        p1 = std::make_unique<Point<T>>(*other.p1);
        p2 = std::make_unique<Point<T>>(*other.p2);
        p3 = std::make_unique<Point<T>>(*other.p3);
        p4 = std::make_unique<Point<T>>(*other.p4);
    }
    return *this;
}

template <Scalar T>
T Rectangle<T>::area() const {
    T width = std::sqrt((p2->x - p1->x) * (p2->x - p1->x) + (p2->y - p1->y) * (p2->y - p1->y));
    T height = std::sqrt((p4->x - p1->x) * (p4->x - p1->x) + (p4->y - p1->y) * (p4->y - p1->y));
    return width * height;
}

template <Scalar T>
Point<T> Rectangle<T>::center() const {
    T centerX = (p1->x + p2->x + p3->x + p4->x) / 4;
    T centerY = (p1->y + p2->y + p3->y + p4->y) / 4;
    return Point<T>(centerX, centerY);
}

template <Scalar T>
void Rectangle<T>::print() const {
    std::cout << "Rectangle: ";
    p1->print(); std::cout << ", ";
    p2->print(); std::cout << ", ";
    p3->print(); std::cout << ", ";
    p4->print(); std::cout << " Area: " << area() << std::endl;
}


template class Rectangle<double>;
template class Rectangle<int>;