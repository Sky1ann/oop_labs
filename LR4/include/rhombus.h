#ifndef RHOMBUS
#define RHOMBUS

#include "figure.h"

template <Scalar T>
class Rhombus : public Figure<T> {
private:
    std::unique_ptr<Point<T>> p1, p2, p3, p4;

    bool isValidRhombus(const Point<T>& a, const Point<T>& b, const Point<T>& c, const Point<T>& d) const {
        auto distance = [](const Point<T>& p1, const Point<T>& p2) {
            return std::sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
        };

        T d1 = distance(a, b);
        T d2 = distance(b, c);
        T d3 = distance(c, d);
        T d4 = distance(d, a);
        T d5 = distance(a, c);
        T d6 = distance(b, d);

        return (d1 == d3) && (d2 == d4) && (d1 == d2);
    }

public:
    Rhombus(Point<T> a = Point<T>(), Point<T> b = Point<T>(), Point<T> c = Point<T>(), Point<T> d = Point<T>());
    Rhombus(const Rhombus<T>& other);
    Rhombus<T>& operator=(const Rhombus<T>& other);

    T area() const override;
    Point<T> center() const override;
    void print() const override;

    std::shared_ptr<Figure<T>> clone() const override {
        return std::make_shared<Rhombus<T>>(*this);
    }

    friend std::istream &operator>>(std::istream &stream, Rhombus<T> *obj) {
        Point<T> a, b, c, d;
        if (!(stream >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y)) {
            throw std::invalid_argument("Некорректный ввод для Rhombus");
        }

        std::vector<Point<T>> points = {a, b, c, d};
        bool valid = false;

        for (size_t i = 0; i < points.size(); ++i) {
            for (size_t j = i + 1; j < points.size(); ++j) {
                for (size_t k = j + 1; k < points.size(); ++k) {
                    for (size_t l = k + 1; l < points.size(); ++l) {
                        if (obj->isValidRhombus(points[i], points[j], points[k], points[l])) {
                            valid = true;
                            break;
                        }
                    }
                    if (valid) break;
                }
                if (valid) break;
            }
            if (valid) break;
        }

        if (!valid) {
            throw std::invalid_argument("Введенные точки не образуют ромб");
        }

        obj->p1 = std::make_unique<Point<T>>(a);
        obj->p2 = std::make_unique<Point<T>>(b);
        obj->p3 = std::make_unique<Point<T>>(c);
        obj->p4 = std::make_unique<Point<T>>(d);
        return stream;
    }

};

#endif // RHOMBUS