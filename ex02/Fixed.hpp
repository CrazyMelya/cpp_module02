#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int	value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(Fixed const &fix);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed &operator=(Fixed const &fix);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int	toInt( void ) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;
	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	static	Fixed	&min(Fixed &fix1, Fixed &fix2);
	static	Fixed	&max(Fixed &fix1, Fixed &fix2);
	static	const Fixed	&min(Fixed const &fix1, Fixed const &fix2);
	static	const Fixed	&max(Fixed const &fix1, Fixed const &fix2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fix);

#endif