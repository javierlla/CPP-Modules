/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:07:47 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/20 17:25:50 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {}

Fixed::Fixed(const int value) //constructor convierte de int a punto fijo
{
    _fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value) //constructor convierte de float a punto fijo (*256)
{
    _fixedPointValue = static_cast<int>(roundf(value * (1 << _fractionalBits)));
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
    {
        _fixedPointValue = other._fixedPointValue;
    }
    return *this;
}

//operadores de comparacion

//devuelvo true si el operador del objecto actual es mayor
//que operador del objeto other
bool Fixed::operator>(const Fixed& other) const 
{
    return _fixedPointValue > other._fixedPointValue;
}
bool Fixed::operator<(const Fixed& other) const
{
    return _fixedPointValue < other._fixedPointValue;
}
bool Fixed::operator>=(const Fixed& other) const
{
    return _fixedPointValue >= other._fixedPointValue;
}
bool Fixed::operator<=(const Fixed& other) const
{
    return _fixedPointValue <= other._fixedPointValue;
}
bool Fixed::operator==(const Fixed& other) const
{
    return _fixedPointValue == other._fixedPointValue;
}
bool Fixed::operator!=(const Fixed& other) const
{
    return _fixedPointValue != other._fixedPointValue;
}

//operadores aritmeticos(operaciones entre objetos)
//devuelve un nuevo objeto con el resultado
Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed& other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

//operador de incremento y decremento
Fixed& Fixed::operator++()
{
    _fixedPointValue++;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++(*this);
    return temp;
}
Fixed& Fixed::operator--()
{
    _fixedPointValue--;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --(*this);
    return temp;
}

// funciones estaticas
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return a < b ? a : b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return a < b ? a : b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return a > b ? a : b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return a > b ? a : b;
}

float Fixed::toFloat() const
{
    return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
}

int Fixed::toInt() const
{
    return _fixedPointValue >> _fractionalBits;
}

int Fixed::getRawBits() const
{
    return _fixedPointValue;
}
void Fixed::setRawBits(int const raw)
{
    _fixedPointValue = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}
