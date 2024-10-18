#include "../include/rhombus.h"
#include <cmath>
#include <iostream>


figure::point rhombus::center() const {
    point center;
    for (const auto& vertex : vertices) {
        center.x += vertex.x;
        center.y += vertex.y;
    }
    center.x /= 4;
    center.y /= 4;
    return center;
}


rhombus::operator double() const {
    double maxDistance = 0;
    int diag1_start = 0, diag1_end = 0;

    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            double dist = distance(vertices[i], vertices[j]);
            if (dist > maxDistance) {
                maxDistance = dist;
                diag1_start = i;
                diag1_end = j;
            }
        }
    }

    double d1 = maxDistance;

    int remaining1 = -1, remaining2 = -1;
    for (int i = 0; i < 4; ++i) {
        if (i != diag1_start && i != diag1_end) {
            if (remaining1 == -1) {
                remaining1 = i;
            } else {
                remaining2 = i;
            }
        }
    }

    double d2 = distance(vertices[remaining1], vertices[remaining2]);

    return 0.5 * d1 * d2;
}


std::ostream &rhombus::print(std::ostream &stream) const {
    stream << "ромб с координатами: ";
    for (const auto& vertex : vertices) {
        stream << "(" << vertex.x << "," << vertex.y << ") ";
    }
    return stream;
}


std::istream &rhombus::read(std::istream &stream) {
    for (auto& vertex : vertices) {
        stream >> vertex.x >> vertex.y;
    }
    return stream;
}


//копирование
rhombus& rhombus::operator=(const rhombus& other) {
    if (this != &other) { 
        for (int i = 0; i < 4; ++i) {
            vertices[i] = other.vertices[i];
        }
    }
    return *this;
}


//перемещение
rhombus& rhombus::operator=(rhombus&& other) noexcept {
    if (this != &other) { 
        for (int i = 0; i < 4; ++i) {
            vertices[i] = std::move(other.vertices[i]);
        }
    }
    return *this;
}


bool rhombus::operator==(const rhombus& other) const {
    for (int i = 0; i < 4; ++i) {
        if (vertices[i].x != other.vertices[i].x || vertices[i].y != other.vertices[i].y) {
            return false;
        }
    }
    return true;
}


bool rhombus::operator!=(const rhombus& other) const {
    return !(*this == other);
}