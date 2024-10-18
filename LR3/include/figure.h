#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class figure {

public:

    struct point{
        double x;
        double y;
    };

    virtual point center() const = 0;
    virtual explicit operator double() const = 0;

    friend std::ostream &operator<<(std::ostream &stream, figure const *obj);
    friend std::istream &operator>>(std::istream &stream, figure *obj);

    virtual ~figure() = default;

protected:
    virtual std::ostream &print(std::ostream &stream) const = 0;
    virtual std::istream &read(std::istream &stream) = 0;

    static double distance(const figure::point& a, const figure::point& b) {
        return std::sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
    };

};

#endif