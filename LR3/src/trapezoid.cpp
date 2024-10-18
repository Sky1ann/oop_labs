#include "../include/trapezoid.h"
#include <cmath>
#include <iostream>


figure::point trapezoid::center() const {
    point center;
    for (const auto& vertex : vertices) {
        center.x += vertex.x;
        center.y += vertex.y;
    }
    center.x /= 4;
    center.y /= 4;
    return center;
}


trapezoid::operator double() const {  //формула гаусса
    double area = 0.0;

    for (int i = 0; i < 4; ++i) {
        int next = (i + 1) % 4;
        area += (vertices[i].x * vertices[next].y) - (vertices[i].y * vertices[next].x);
    }

    return std::abs(area) / 2.0;
}


std::ostream &trapezoid::print(std::ostream &stream) const {
    stream << "трапеция с координатами: ";
    for (const auto& vertex : vertices) {
        stream << "(" << vertex.x << "," << vertex.y << ") ";
    }
    return stream;
}


std::istream &trapezoid::read(std::istream &stream) {
    for (auto& vertex : vertices) {
        stream >> vertex.x >> vertex.y;
    }
    return stream;
}


//копирование
trapezoid& trapezoid::operator=(const trapezoid& other) {
    if (this != &other) { 
        for (int i = 0; i < 4; ++i) {
            vertices[i] = other.vertices[i];
        }
    }
    return *this;
}


//перемещение
trapezoid& trapezoid::operator=(trapezoid&& other) noexcept {
    if (this != &other) { 
        for (int i = 0; i < 4; ++i) {
            vertices[i] = std::move(other.vertices[i]);
        }
    }
    return *this;
}


bool trapezoid::operator==(const trapezoid& other) const {
    for (int i = 0; i < 4; ++i) {
        if (vertices[i].x != other.vertices[i].x || vertices[i].y != other.vertices[i].y) {
            return false;
        }
    }
    return true;
}


bool trapezoid::operator!=(const trapezoid& other) const {
    return !(*this == other);
}