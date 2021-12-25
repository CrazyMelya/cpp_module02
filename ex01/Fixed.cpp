#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(Fixed const &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(value << bits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(value * (1 << bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(fix.getRawBits());
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat() const
{
	return ((float) this->getRawBits() / (float) (1 << bits));
}

int		Fixed::toInt() const
{
	return (this->getRawBits() >> 8);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fix)
{
	os << fix.toFloat();
	return (os);
}
