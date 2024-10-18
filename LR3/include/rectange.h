#ifndef RECTANGLE
#define RECTANGLE

#include "figure.h"

class rectangle : public figure {

private:

    point vertices[4];

public:
    
    rectangle() = default;

    point center() const override;
    explicit operator double() const override;

    rectangle& operator=(const rectangle& other);
    rectangle& operator=(rectangle&& other) noexcept;

    bool operator==(const rectangle& other) const;
    bool operator!=(const rectangle& other) const;

protected:
    std::ostream &print(std::ostream &stream) const override;
    std::istream &read(std::istream &stream) override;

};

#endif