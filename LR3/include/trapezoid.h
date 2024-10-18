#ifndef TRAPEZOID
#define TRAPEZOID

#include "figure.h"

class trapezoid : public figure {

private:

    point vertices[4];

public:
    
    trapezoid() = default;

    point center() const override;
    explicit operator double() const override;

    trapezoid& operator=(const trapezoid& other);
    trapezoid& operator=(trapezoid&& other) noexcept;

    bool operator==(const trapezoid& other) const;
    bool operator!=(const trapezoid& other) const;

protected:
    std::ostream &print(std::ostream &stream) const override;
    std::istream &read(std::istream &stream) override;

};

#endif 