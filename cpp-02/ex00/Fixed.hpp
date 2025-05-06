#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _value; // numero fijo
    static const int _fractionalBits = 8; // bits fraccionarios

public:
    Fixed();
    Fixed(const Fixed& other); //constructor de copia
    Fixed& operator=(const Fixed& other); //operador de asignacion
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif