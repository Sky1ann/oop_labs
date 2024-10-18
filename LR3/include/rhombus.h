#ifndef RHOMBUS
#define RHOMBUS

#include "figure.h"

class rhombus : public figure {

private:

    point vertices[4];

public:
    
    rhombus() = default;

    point center() const override;
    explicit operator double() const override;

    rhombus& operator=(const rhombus& other);
    rhombus& operator=(rhombus&& other) noexcept;

    bool operator==(const rhombus& other) const;
    bool operator!=(const rhombus& other) const;

protected:
    std::ostream &print(std::ostream &stream) const override;
    std::istream &read(std::istream &stream) override;

};

#endif