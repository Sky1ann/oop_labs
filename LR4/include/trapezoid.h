#ifndef TRAPEZOID
#define TRAPEZOID

#include "figure.h"

template <Scalar T>
class Trapezoid : public Figure<T> {
private:
    std::unique_ptr<Point<T>> p1, p2, p3, p4;

    bool isValidTrapezoid(const Point<T>& a, const Point<T>& b, const Point<T>& c, const Point<T>& d) const {
    auto areParallel = [](const Point<T>& p1, const Point<T>& p2, const Point<T>& p3, const Point<T>& p4) {
        T deltaX1 = p2.x - p1.x;
        T deltaY1 = p2.y - p1.y;
        T deltaX2 = p4.x - p3.x;
        T deltaY2 = p4.y - p3.y;

        return (deltaX1 * deltaY2) == (deltaY1 * deltaX2);
    };

    return areParallel(a, b, c, d) || areParallel(a, d, b, c);
}

public:
    Trapezoid(Point<T> a = Point<T>(), Point<T> b = Point<T>(), Point<T> c = Point<T>(), Point<T> d = Point<T>());
    Trapezoid(const Trapezoid<T>& other);
    Trapezoid<T>& operator=(const Trapezoid<T>& other);

    T area() const override;
    Point<T> center() const override;
    void print() const override;

    std::shared_ptr<Figure<T>> clone() const override {
        return std::make_shared<Trapezoid<T>>(*this);
    }

    friend std::istream &operator>>(std::istream &stream, Trapezoid<T> *obj) {
        Point<T> a, b, c, d;
        if (!(stream >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y)) {
            throw std::invalid_argument("Некорректный ввод для Trapezoid");
        }

        std::vector<Point<T>> points = {a, b, c, d};

        if (!(obj->isValidTrapezoid(points[i], points[j], points[k], points[l]))) {
            throw std::invalid_argument("Введенные точки не образуют трапецию");
        }

        obj->p1 = std::make_unique<Point<T>>(a);
        obj->p2 = std::make_unique<Point<T>>(b);
        obj->p3 = std::make_unique<Point<T>>(c);
        obj->p4 = std::make_unique<Point<T>>(d);
        return stream;
    }
};

#endif // TRAPEZOID