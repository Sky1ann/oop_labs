#ifndef octal_h
#define octal_h

#include <iostream>
#include <string>

class octal {

    private :

        size_t size;
        unsigned char* array;

    public : 

        //Конструкторы
        octal();
        octal(const size_t& n, unsigned char t);             //Создает массив указанного размера n и инициализирует его значением t 
        octal(const std::initializer_list< unsigned char> &t);  //Создает массив с элементами из списка инициализации
        octal(const std::string &t);                           //Создает массив, инициализируя его содержимым строки
        octal(const octal& other);                            //Конструктор копирования
        octal(octal&& other) noexcept;                       //Конструктор перемещения

        //Математические операторы
        bool operator== (const octal &other) const;
        bool operator!= (const octal &other) const; 
        bool operator< (const octal &otbher) const; 
        bool operator> (const octal &other) const; 

        octal& operator= (const octal &other); 
        octal& operator+= (const octal &other); 
        octal& operator-= (const octal &other);

        //Вывод числа
        std::ostream& print(std::ostream& os) const;

        //Диструктор
        virtual ~octal() noexcept;
};

#endif
