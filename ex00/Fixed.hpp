#include <iostream>

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
	~Fixed();
	Fixed &operator=(Fixed const &fix);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif