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
};

std::ostream &operator<<(std::ostream &os, const Fixed &fix);

#endif