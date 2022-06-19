#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &number)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = number;
};

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed & Fixed::operator = (const Fixed &right)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = right.getRawBits();
    return *this;
}