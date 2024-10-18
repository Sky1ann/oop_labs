#include "../include/rectange.h"
#include <cmath>
#include <iostream>


figure::point rectangle::center() const {
    point center;
    for (const auto& vertex : vertices) {
        center.x += vertex.x;
        center.y += vertex.y;
    }
    center.x /= 4;
    center.y /= 4;
    return center;
}


rectangle::operator double() const {
    double side1 = figure::distance(vertices[0], vertices[1]);
    double side2 = figure::distance(vertices[0], vertices[2]);
    double side3 = figure::distance(vertices[0], vertices[3]);
    if (side1 > side2 && side1 > side3) {
        return side2 * side3;
    } else if (side2 > side1 && side2 > side3) {
        return side1 * side3;
    } else {
        return side1 * side2;
    }
}


std::ostream &rectangle::print(std::ostream &stream) const {
    stream << "прямоугольник с координатами: ";
    for (const auto& vertex : vertices) {
        stream << "(" << vertex.x << "," << vertex.y << ") ";
    }
    return stream;
}


std::istream &rectangle::read(std::istream &stream) {
    for (auto& vertex : vertices) {
        stream >> vertex.x >> vertex.y;
    }
    return stream;
}


//копирование
rectangle& rectangle::operator=(const rectangle& other) {
    if (this != &other) { 
        for (int i = 0; i < 4; ++i) {
            vertices[i] = other.vertices[i];
        }
    }
    return *this;
}


//перемещение
rectangle& rectangle::operator=(rectangle&& other) noexcept {
    if (this != &other) { 
        for (int i = 0; i < 4; ++i) {
            vertices[i] = std::move(other.vertices[i]);
        }
    }
    return *this;
}


bool rectangle::operator==(const rectangle& other) const {
    for (int i = 0; i < 4; ++i) {
        if (vertices[i].x != other.vertices[i].x || vertices[i].y != other.vertices[i].y) {
            return false;
        }
    }
    return true;
}


bool rectangle::operator!=(const rectangle& other) const {
    return !(*this == other);
}