#include "../include/octal.h"
#include <iostream>

bool isOctal(unsigned char t) {
    if (t < '0' || t > '7') {
        return false;
    }
    return true;
}


octal::octal() {
    size = 1;
    array = new unsigned char [1]{'0'};
}


octal::octal(const size_t& n, unsigned char t) {
    if (!isOctal(t)) throw std::invalid_argument("Некорректный символ");
    if (t == '0') {
        size = 1;
        array = new unsigned char[1]{'0'};
    } else {
        size = n;
        array = new unsigned char[n];
        for (int i = 0; i < n; i++) {
            array[i] = t;
        }
    }
}


octal::octal(const std::initializer_list< unsigned char> &t) {
    for (auto a : t) {
        if (!isOctal(a)) throw std::invalid_argument("Некорректный символ");
    }

    size_t zeros = 0;
    for (auto c : t) {
        if (c == '0') {
            zeros += 1;
        } else break;        
    }
    size = t.size() - zeros;
    if (size == 0) {
        size = 1;
        array = new unsigned char[1]{0};
    } else {
        array = new unsigned char[size];
        int i = 0;
        for (auto it = t.end() - 1; it != t.begin() - 1 + zeros; --it) {
            array[i++] = *it;
        }
    }
}


octal::octal(const std::string &t) {
    for (int i = 0; i < t.size(); i++) {
        if (!isOctal(t[i])) throw std::invalid_argument("Некорректный символ");
    }

    size_t zeros = 0;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == '0') {
            zeros += 1;
        } else break;
    }
    size = t.size() - zeros;
    if (size == 0) {
        size = 1;
        array = new unsigned char[1]{0};
    } else {
        array = new unsigned char[size];
        for (size_t i = 0; i < size; i++) {
            array[i] = t[t.size() - 1 - i];
        }
    }
}


octal::octal(const octal& other) {
    size = other.size;
    array = new unsigned char[size];
    for (int i = 0; i < size; i++) {
        array[i] = other.array[i];
    }
}


octal::octal(octal&& other) noexcept {
    size = other.size;
    array = other.array;
    other.size = 0;
    other.array = nullptr;
}


bool octal::operator== (const octal &other) const {
    if (size != other.size) return false;
    for (int i = 0; i < size; i++) {
        if (array[i] != other.array[i]) return false;
    }
    return true;
}


bool octal::operator!= (const octal &other) const {
    return !(*this == other);
}


bool octal::operator< (const octal &other) const {
    if (size < other.size) {
        return true;
    } else if (size > other.size) {
        return false;
    } else {
        int a, b;
        for (int i = size - 1; i >= 0; i--) {
            a = array[i] - '0';
            b = other.array[i] - '0';
            if (a < b) return true;
            else if (a > b) return false;
        }
    }
    return false;
}


bool octal::operator> (const octal &other) const {
    if (size < other.size) {
        return false;
    } else if (size > other.size) {
        return true;
    } else {
        int a, b;
        for (int i = size - 1; i >= 0; i--) {
            a = array[i] - '0';
            b = other.array[i] - '0';
            if (a < b) return false;
            else if (a > b) return true;
        }
    }
    return false;
}  


octal& octal::operator=(const octal& other) {
    if (this != &other) {
        delete[] array;
        size = other.size;
        array = new unsigned char[size];
        for (size_t i; i < size; i++) {
            array[i] = other.array[i];
        }
    }
    return *this;
}


octal& octal::operator+= (const octal &other) {
    std::string res = "";
    int num1, num2, sum;
    int remainder = 0;
    for (int i = 0; i < std::max(size, other.size); i++) {
        num1 = i < size ? array[i] - '0' : 0;
        num2 = i < other.size ? other.array[i] - '0' : 0;
        sum = num1 + num2 + remainder;

        if (sum >= 8) {
            remainder = 1;
            sum %= 8;
        } else remainder = 0;

        res += (sum + '0');
    }

    if (remainder > 0) res += '1';

    delete[] array;

    size = res.size();
    array = new unsigned char[size];
    
    for (size_t i = 0; i < size; i++) {
        array[i] = res[i];
    }

    return *this;
}


octal& octal::operator-= (const octal &other) {
    if (other > *this) throw std::logic_error("Разность не может быть отрицательной");
    std::string res = "";
    int num1, num2, diff;
    int borrow = 0; 

    for (int i = 0; i < size; i++) {
        num1 = i < size ? array[i] - '0' : 0;
        num2 = i < other.size ? other.array[i] - '0' : 0;

        diff = num1 - num2 - borrow;

        if (diff < 0) {
            borrow = 1;
            diff += 8;
        } else {
            borrow = 0;
        }

        res += (diff + '0');
    }

    while (res.size() > 1 && res.back() == '0') {
        res.pop_back();
    }

    delete[] array;

    size = res.size();
    array = new unsigned char[size];

    for (size_t i = 0; i < size; i++) {
        array[i] = res[i];
    }

    return *this;
}


std::ostream& octal::print(std::ostream& os) const {
    for (size_t i = size; i > 0; i--) {
        os << array[i - 1];
    }
    return os;
}


octal::~octal() {
    if (size > 0) {
        size = 0;
        delete[] array;
        array = nullptr;
    }
}